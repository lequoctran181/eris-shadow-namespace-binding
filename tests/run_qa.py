#!/usr/bin/env python3
"""End-to-end data, preparation, and grader QA."""

from __future__ import annotations

import hashlib
import json
import shutil
from pathlib import Path
from typing import Callable

import numpy as np
import pandas as pd

from challenge.grade import grade
from challenge.prepare import prepare


ROOT = Path(__file__).resolve().parents[1]
RAW_AUDIT_COLUMNS = {
    "capture_profile_id",
    "upstream_profile_path",
    "upstream_profile_sha256",
    "fixture_binary_set_sha256",
    "target_hard_fraction",
    "native_context_map_json",
    "support_condition_map_json",
    "target_condition_map_json",
}


def tree_hashes(root: Path) -> dict[str, str]:
    result: dict[str, str] = {}
    for path in sorted(root.rglob("*")):
        if path.is_file():
            digest = hashlib.sha256()
            with path.open("rb") as handle:
                for chunk in iter(lambda: handle.read(1 << 20), b""):
                    digest.update(chunk)
            result[str(path.relative_to(root))] = digest.hexdigest()
    return result


def expect_error(name: str, action: Callable[[], object], results: dict[str, object]) -> None:
    try:
        action()
    except (ValueError, TypeError, json.JSONDecodeError) as exc:
        results[name] = str(exc)
        return
    raise AssertionError(f"{name} did not raise")


def perfect_submission(answers: pd.DataFrame) -> pd.DataFrame:
    rows = []
    for _, row in answers.iterrows():
        bindings = json.loads(row["binding_target_json"])
        scopes = json.loads(row["scope_target_json"])
        deferred = json.loads(row["deferred_target_json"])
        ledger = {
            "bindings": [
                f"Q{q:02d}=" + ("U" if value == 8 else f"C{value:02d}")
                for q, value in enumerate(bindings)
            ],
            "scope_roots": [f"M{value:02d}" for value in scopes],
            "deferred": [f"Q{value:02d}" for value in deferred],
        }
        rows.append({
            "case_id": row["case_id"],
            "ledger_json": json.dumps(ledger, separators=(",", ":"), sort_keys=True),
        })
    return pd.DataFrame(rows)


def observed_provider(
    capture: dict[str, np.ndarray], family: int, condition: dict[str, int]
) -> int:
    context = int(condition["native_context"])
    symbol = int(condition["symbol"])
    if int(condition["lookup_mode"]) == 0:
        return int(capture["root_outcome"][family, context, symbol])
    return int(
        capture["direct_outcome"][
            family, context, int(condition["direct_provider"]), symbol
        ]
    )


def validate_native_lineage() -> dict[str, int]:
    manifest = pd.read_csv(ROOT / "raw" / "cases_full.csv")
    required = {
        "native_context_map_json",
        "support_condition_map_json",
        "target_condition_map_json",
    }
    if not required.issubset(manifest.columns):
        raise AssertionError("Raw manifest is missing native lineage maps")
    with np.load(ROOT / "raw" / "native_capture.npz", allow_pickle=False) as source:
        capture = {name: source[name] for name in source.files}
    checked_support = 0
    checked_target = 0
    needed = (
        "support_choice",
        "support_candidate_features",
        "binding_target",
        "candidate_features",
        "deferred_target",
        "scope_target",
    )
    with np.load(ROOT / "raw" / "binding_worlds_full.npz", allow_pickle=False) as archive:
        data = {name: archive[name] for name in needed}
        for _, case in manifest.iterrows():
            row = int(case["row_index"])
            family = int(str(case["family_id"]).split("-")[-1])
            contexts = np.asarray(json.loads(case["native_context_map_json"]), dtype=int)
            support_conditions = json.loads(case["support_condition_map_json"])
            target_conditions = json.loads(case["target_condition_map_json"])
            support_keys = {
                (
                    int(item["native_context"]),
                    int(item["symbol"]),
                    int(item["lookup_mode"]),
                    int(item["direct_provider"]),
                )
                for item in support_conditions
            }
            target_keys = {
                (
                    int(item["native_context"]),
                    int(item["symbol"]),
                    int(item["lookup_mode"]),
                    int(item["direct_provider"]),
                )
                for item in target_conditions
            }
            assert support_keys.isdisjoint(target_keys)
            assert len(contexts) == 8 and len(set(contexts)) == 8
            for condition in [*support_conditions, *target_conditions]:
                local = int(condition["local_context"])
                assert int(contexts[local]) == int(condition["native_context"])

            for index, condition in enumerate(support_conditions):
                winner = observed_provider(capture, family, condition)
                choice = int(data["support_choice"][row, index])
                if choice == 8:
                    actual = -1
                else:
                    actual = int(data["support_candidate_features"][row, index, choice, 0])
                assert actual == winner
                checked_support += 1

            winner_counts = np.zeros(8, dtype=np.int16)
            global_root_wins = np.zeros(8, dtype=np.int16)
            for index, condition in enumerate(target_conditions):
                winner = observed_provider(capture, family, condition)
                choice = int(data["binding_target"][row, index])
                if choice == 8:
                    actual = -1
                else:
                    actual = int(data["candidate_features"][row, index, choice, 0])
                assert actual == winner
                expected_deferred = 0
                if winner >= 0:
                    winner_counts[winner] += 1
                    if int(condition["lookup_mode"]) == 0:
                        global_root_wins[winner] += 1
                    expected_deferred = int(
                        capture["lazy_mask"][family, int(condition["native_context"]), winner]
                    )
                assert int(data["deferred_target"][row, index]) == expected_deferred
                checked_target += 1
            selected_global_counts = capture["global_mask"][family, contexts].sum(axis=0)
            expected_scope = (global_root_wins >= 2) | (
                (winner_counts >= 3) & (selected_global_counts >= 4)
            )
            assert np.array_equal(data["scope_target"][row, :8], expected_scope.astype(np.uint8))
            assert not data["scope_target"][row, 8:].any()
    return {
        "cases": len(manifest),
        "support_outcomes": checked_support,
        "target_outcomes": checked_target,
    }


def main() -> None:
    out1 = ROOT / "qa" / "repeat_a"
    out2 = ROOT / "qa" / "repeat_b"
    for base in (out1, out2):
        if base.exists():
            shutil.rmtree(base)
        prepare(ROOT / "raw", base / "public", base / "private")
    hashes_a = tree_hashes(out1)
    hashes_b = tree_hashes(out2)
    assert hashes_a == hashes_b

    public = out1 / "public"
    private = out1 / "private"
    train_manifest = pd.read_csv(public / "train_cases.csv")
    test_manifest = pd.read_csv(public / "test_cases.csv")
    answers = pd.read_csv(private / "answers.csv")
    sample = pd.read_csv(public / "sample_submission.csv")
    assert len(train_manifest) == 3200
    assert len(test_manifest) == 800
    assert len(set(train_manifest["family_id"]) & set(test_manifest["family_id"])) == 0
    assert not (RAW_AUDIT_COLUMNS & set(train_manifest.columns))
    assert not (RAW_AUDIT_COLUMNS & set(test_manifest.columns))
    assert set(sample["case_id"]) == set(test_manifest["case_id"]) == set(answers["case_id"])

    forbidden = {
        "binding_target",
        "scope_target",
        "deferred_target",
        "candidate_behavior",
        "program_target",
        "case_weight",
        "split_code",
    }
    with np.load(public / "train.npz", allow_pickle=False) as train:
        train_names = set(train.files)
        assert {"binding_target", "scope_target", "deferred_target", "program_target"}.issubset(train_names)
        assert train["probe_trace"].shape == (3200, 24, 256, 8)
    with np.load(public / "test.npz", allow_pickle=False) as test:
        test_names = set(test.files)
        assert not (forbidden & test_names)
        assert test["probe_trace"].shape == (800, 24, 256, 8)
        assert np.isfinite(test["probe_trace"]).all()

    perfect = perfect_submission(answers)
    perfect_score = grade(perfect, answers)
    shuffled_score = grade(perfect.sample(frac=1, random_state=7), answers)
    assert abs(perfect_score - 1.0) < 1e-12
    assert abs(shuffled_score - 1.0) < 1e-12
    sample_score = grade(sample, answers)

    invalid_results: dict[str, object] = {}
    expect_error(
        "missing_column",
        lambda: grade(sample[["case_id"]], answers),
        invalid_results,
    )
    expect_error(
        "missing_id",
        lambda: grade(sample.iloc[:-1], answers),
        invalid_results,
    )
    expect_error(
        "extra_id",
        lambda: grade(
            pd.concat(
                [sample, pd.DataFrame([{"case_id": "EXTRA", "ledger_json": sample.iloc[0]["ledger_json"]}])],
                ignore_index=True,
            ),
            answers,
        ),
        invalid_results,
    )
    expect_error(
        "duplicate_id",
        lambda: grade(pd.concat([sample, sample.iloc[[0]]], ignore_index=True), answers),
        invalid_results,
    )
    malformed = sample.copy()
    malformed.loc[0, "ledger_json"] = "{not-json"
    expect_error("malformed_json", lambda: grade(malformed, answers), invalid_results)
    missing_binding = sample.copy()
    obj = json.loads(missing_binding.loc[0, "ledger_json"])
    obj["bindings"] = obj["bindings"][:-1]
    missing_binding.loc[0, "ledger_json"] = json.dumps(obj)
    expect_error("missing_binding", lambda: grade(missing_binding, answers), invalid_results)
    unknown_candidate = sample.copy()
    obj = json.loads(unknown_candidate.loc[0, "ledger_json"])
    obj["bindings"][0] = "Q00=C99"
    unknown_candidate.loc[0, "ledger_json"] = json.dumps(obj)
    expect_error("unknown_candidate", lambda: grade(unknown_candidate, answers), invalid_results)

    landmarks = {
        "empty_unresolved": sample_score,
        "reference": grade(pd.read_csv(ROOT / "qa" / "reference_submission_v2.csv"), answers),
        "perfect": perfect_score,
    }
    lineage = validate_native_lineage()
    result = {
        "prepare_deterministic": True,
        "prepared_file_count": len(hashes_a),
        "train_cases": len(train_manifest),
        "test_cases": len(test_manifest),
        "train_families": int(train_manifest["family_id"].nunique()),
        "test_families": int(test_manifest["family_id"].nunique()),
        "family_overlap": 0,
        "test_target_arrays": sorted(forbidden & test_names),
        "perfect_row_order_invariant": True,
        "landmarks": landmarks,
        "invalid_submission_checks": invalid_results,
        "raw_npz_bytes": (ROOT / "raw" / "binding_worlds_full.npz").stat().st_size,
        "native_lineage": lineage,
    }
    (ROOT / "qa" / "qa_results.json").write_text(json.dumps(result, indent=2) + "\n")
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()
