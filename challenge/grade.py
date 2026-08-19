"""Chance-Corrected Binding Ledger Utility grader."""

from __future__ import annotations

import base64
import json
import math
import re
from dataclasses import dataclass
from typing import Any

import numpy as np
import pandas as pd


WEIGHTS = {
    "binding": 0.46,
    "behavior": 0.22,
    "coalescence": 0.12,
    "scope": 0.10,
    "deferred": 0.07,
    "exact": 0.03,
}
REQUIRED_COLUMNS = {"case_id", "ledger_json"}
OPTIONAL_PLATFORM_COLUMNS = {"visibility"}
LEDGER_KEYS = {"bindings", "scope_roots", "deferred"}
BINDING_RE = re.compile(r"^Q(\d{2})=(?:C(\d{2})|U)$")
MODULE_RE = re.compile(r"^M(\d{2})$")
QUERY_RE = re.compile(r"^Q(\d{2})$")


@dataclass
class ParsedLedger:
    choices: np.ndarray
    scopes: list[int]
    deferred: list[int]


def _json_object(value: Any) -> dict[str, Any]:
    if not isinstance(value, str) or len(value) > 50_000:
        raise ValueError("ledger_json must be a bounded JSON string")
    obj = json.loads(value)
    if not isinstance(obj, dict):
        raise ValueError("ledger_json must decode to an object")
    return obj


def _parse_ledger(value: Any, query_count: int, module_count: int, candidate_counts: np.ndarray) -> ParsedLedger:
    obj = _json_object(value)
    if set(obj) != LEDGER_KEYS:
        raise ValueError("ledger_json must contain exactly bindings, scope_roots, and deferred")
    if not all(isinstance(obj[key], list) for key in LEDGER_KEYS):
        raise ValueError("Every ledger field must be a JSON list")
    if not all(isinstance(item, str) for key in LEDGER_KEYS for item in obj[key]):
        raise ValueError("All ledger IDs must be strings")
    if any(len(obj[key]) != len(set(obj[key])) for key in LEDGER_KEYS):
        raise ValueError("Ledger lists must not contain duplicate IDs")

    choices = np.full(query_count, -1, dtype=np.int16)
    for item in obj["bindings"]:
        match = BINDING_RE.fullmatch(item)
        if match is None:
            raise ValueError(f"Malformed binding ID: {item}")
        query = int(match.group(1))
        if query >= query_count or choices[query] != -1:
            raise ValueError("Bindings contain an unknown or repeated query")
        candidate = int(match.group(2)) if match.group(2) is not None else 8
        if candidate != 8 and candidate >= int(candidate_counts[query]):
            raise ValueError(f"Binding {item} selects an unavailable candidate")
        choices[query] = candidate
    if np.any(choices < 0) or len(obj["bindings"]) != query_count:
        raise ValueError("bindings must assign every active query exactly once")

    scopes: list[int] = []
    for item in obj["scope_roots"]:
        match = MODULE_RE.fullmatch(item)
        if match is None or int(match.group(1)) >= module_count:
            raise ValueError(f"Unknown scope root: {item}")
        scopes.append(int(match.group(1)))

    deferred: list[int] = []
    for item in obj["deferred"]:
        match = QUERY_RE.fullmatch(item)
        if match is None or int(match.group(1)) >= query_count:
            raise ValueError(f"Unknown deferred query: {item}")
        deferred.append(int(match.group(1)))
    return ParsedLedger(choices=choices, scopes=scopes, deferred=deferred)


def _chance_gain(raw: float, chance: float) -> float:
    if chance >= 1.0 - 1e-12:
        return 1.0 if raw >= 1.0 - 1e-12 else 0.0
    return float(np.clip((raw - chance) / (1.0 - chance), 0.0, 1.0))


def _set_gain(predicted: list[int], target: list[int], universe_size: int) -> float:
    pred = set(predicted)
    truth = set(target)
    if not pred and not truth:
        return 1.0
    raw = 0.0 if not pred or not truth else 2.0 * len(pred & truth) / (len(pred) + len(truth))
    if universe_size <= 0 or not pred or not truth:
        chance = 0.0
    else:
        expected_intersection = len(pred) * len(truth) / universe_size
        chance = 2.0 * expected_intersection / (len(pred) + len(truth))
    return _chance_gain(raw, chance)


def _comb2(value: int) -> float:
    return value * (value - 1) / 2.0


def _adjusted_rand(true_labels: np.ndarray, pred_labels: np.ndarray) -> float:
    n = len(true_labels)
    if n < 2:
        return 1.0
    _, true_inverse = np.unique(true_labels, return_inverse=True)
    _, pred_inverse = np.unique(pred_labels, return_inverse=True)
    table = np.zeros((true_inverse.max() + 1, pred_inverse.max() + 1), dtype=np.int64)
    np.add.at(table, (true_inverse, pred_inverse), 1)
    index = float(sum(_comb2(int(v)) for v in table.ravel()))
    row_sum = float(sum(_comb2(int(v)) for v in table.sum(axis=1)))
    col_sum = float(sum(_comb2(int(v)) for v in table.sum(axis=0)))
    total = _comb2(n)
    expected = row_sum * col_sum / total if total else 0.0
    maximum = 0.5 * (row_sum + col_sum)
    if abs(maximum - expected) < 1e-12:
        return 1.0 if np.array_equal(true_inverse, pred_inverse) else 0.0
    return float(np.clip((index - expected) / (maximum - expected), 0.0, 1.0))


def _unpack_behavior(payload: str, shape_json: str) -> np.ndarray:
    shape = tuple(int(v) for v in json.loads(shape_json))
    expected_bits = math.prod(shape)
    raw = base64.b64decode(payload.encode("ascii"), validate=True)
    packed = np.frombuffer(raw, dtype=np.uint8)
    bits = np.unpackbits(packed, bitorder="little")[:expected_bits]
    if bits.size != expected_bits:
        raise ValueError("Private behavior payload has the wrong length")
    return bits.reshape(shape).astype(np.uint8)


def _score_case(ledger: ParsedLedger, answer: pd.Series) -> float:
    q_count = int(answer["query_count"])
    m_count = int(answer["module_count"])
    counts = np.asarray(json.loads(answer["candidate_counts_json"]), dtype=np.int16)
    providers = np.asarray(json.loads(answer["candidate_providers_json"]), dtype=np.int16)
    target = np.asarray(json.loads(answer["binding_target_json"]), dtype=np.int16)
    target_scopes = [int(v) for v in json.loads(answer["scope_target_json"])]
    target_deferred = [int(v) for v in json.loads(answer["deferred_target_json"])]
    behavior = _unpack_behavior(answer["behavior_bits_b64"], answer["behavior_shape_json"])

    raw_binding = float(np.mean(ledger.choices == target))
    chance_binding = float(np.mean(1.0 / (counts.astype(np.float64) + 1.0)))
    binding_gain = _chance_gain(raw_binding, chance_binding)

    similarities = np.empty(q_count, dtype=np.float64)
    chance_similarities = np.empty(q_count, dtype=np.float64)
    for q in range(q_count):
        truth_bits = behavior[q, int(target[q])]
        similarities[q] = np.mean(behavior[q, int(ledger.choices[q])] == truth_bits)
        valid = np.concatenate(
            [behavior[q, : int(counts[q])], behavior[q, 8:9]], axis=0
        )
        chance_similarities[q] = np.mean(np.mean(valid == truth_bits[None, :], axis=1))
    behavior_gain = _chance_gain(float(similarities.mean()), float(chance_similarities.mean()))

    pred_provider = np.full(q_count, -1, dtype=np.int16)
    true_provider = np.full(q_count, -1, dtype=np.int16)
    for q in range(q_count):
        if ledger.choices[q] < 8:
            pred_provider[q] = providers[q, int(ledger.choices[q])]
        if target[q] < 8:
            true_provider[q] = providers[q, int(target[q])]
    coalescence_gain = _adjusted_rand(true_provider, pred_provider)
    scope_gain = _set_gain(ledger.scopes, target_scopes, m_count)
    deferred_gain = _set_gain(ledger.deferred, target_deferred, q_count)
    exact = float(
        np.array_equal(ledger.choices, target)
        and set(ledger.scopes) == set(target_scopes)
        and set(ledger.deferred) == set(target_deferred)
    )
    parts = {
        "binding": binding_gain,
        "behavior": behavior_gain,
        "coalescence": coalescence_gain,
        "scope": scope_gain,
        "deferred": deferred_gain,
        "exact": exact,
    }
    return float(sum(WEIGHTS[name] * parts[name] for name in WEIGHTS))


def grade(submission: pd.DataFrame, answers: pd.DataFrame) -> float:
    columns = set(submission.columns)
    if not REQUIRED_COLUMNS.issubset(columns):
        raise ValueError("Submission must contain case_id and ledger_json columns")
    unexpected = columns - REQUIRED_COLUMNS - OPTIONAL_PLATFORM_COLUMNS
    if unexpected:
        raise ValueError(f"Unexpected submission columns: {sorted(unexpected)}")
    if submission["case_id"].isna().any() or submission["case_id"].duplicated().any():
        raise ValueError("case_id values must be present and unique")
    expected_ids = set(answers["case_id"].astype(str))
    submitted_ids = set(submission["case_id"].astype(str))
    missing = expected_ids - submitted_ids
    extra = submitted_ids - expected_ids
    if missing or extra:
        raise ValueError(f"Submission ID mismatch: {len(missing)} missing, {len(extra)} extra")

    merged = answers.merge(submission[["case_id", "ledger_json"]], on="case_id", how="left", validate="one_to_one")
    scores: list[float] = []
    weights: list[float] = []
    for _, row in merged.iterrows():
        counts = np.asarray(json.loads(row["candidate_counts_json"]), dtype=np.int16)
        ledger = _parse_ledger(row["ledger_json"], int(row["query_count"]), int(row["module_count"]), counts)
        scores.append(_score_case(ledger, row))
        weights.append(float(row["case_weight"]))
    score = float(np.average(np.asarray(scores), weights=np.asarray(weights)))
    if not math.isfinite(score) or score < -1e-12 or score > 1.0 + 1e-12:
        raise ValueError("Grader produced an invalid score")
    return float(np.clip(score, 0.0, 1.0))
