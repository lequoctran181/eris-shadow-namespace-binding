#!/usr/bin/env python3
"""Evaluate deterministic non-retrieval landmarks on prepared data."""

from __future__ import annotations

import json
from pathlib import Path

import numpy as np
import pandas as pd

from challenge.grade import grade


ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / "qa" / "public"
ANSWERS = pd.read_csv(ROOT / "qa" / "private" / "answers.csv")
MANIFEST = pd.read_csv(PUBLIC / "test_cases.csv")


def write_ledger(choices: np.ndarray, providers: np.ndarray, q_count: int, m_count: int, deferred: np.ndarray) -> str:
    counts = np.zeros(m_count, dtype=np.int16)
    for q in range(q_count):
        if choices[q] < 8:
            counts[int(providers[q, choices[q]])] += 1
    obj = {
        "bindings": [
            f"Q{q:02d}=" + ("U" if int(choices[q]) == 8 else f"C{int(choices[q]):02d}")
            for q in range(q_count)
        ],
        "scope_roots": [f"M{m:02d}" for m in range(m_count) if counts[m] >= 2],
        "deferred": [f"Q{q:02d}" for q in range(q_count) if deferred[q]],
    }
    return json.dumps(obj, separators=(",", ":"), sort_keys=True)


def make_submission(mode: str) -> pd.DataFrame:
    rows = []
    with np.load(PUBLIC / "test.npz", allow_pickle=False) as data:
        for row, case in MANIFEST.iterrows():
            q_count = int(case["query_count"])
            m_count = int(case["module_count"])
            query = data["query_features"][row, :q_count]
            candidates = data["candidate_features"][row, :q_count]
            mask = data["candidate_mask"][row, :q_count].astype(bool)
            choices = np.full(q_count, 8, dtype=np.int16)
            if mode == "first":
                choices[:] = 0
            elif mode == "surface":
                for q in range(q_count):
                    scores = np.full(8, -1e9, dtype=np.float32)
                    scores[mask[q]] = (
                        2.0 * (candidates[q, mask[q], 1] == query[q, 2])
                        + 2.0 * (candidates[q, mask[q], 2] == query[q, 3])
                        + 1.5 * (candidates[q, mask[q], 5] == query[q, 4])
                        + 1.5 * (candidates[q, mask[q], 6] == query[q, 5])
                        + 1.0 * (candidates[q, mask[q], 0] == query[q, 8])
                    )
                    choices[q] = int(np.argmax(scores))
            elif mode == "support_transfer":
                support_query = data["support_query_features"][row]
                support_candidates = data["support_candidate_features"][row]
                support_choice = data["support_choice"][row].astype(int)
                condition_columns = (1, 2, 3, 4, 5, 7)
                for q in range(q_count):
                    agreement = np.sum(
                        support_query[:, condition_columns]
                        == query[q, condition_columns][None, :],
                        axis=1,
                    )
                    support_index = int(np.argmax(agreement))
                    if agreement[support_index] != len(condition_columns):
                        continue
                    observed_slot = int(support_choice[support_index])
                    if observed_slot == 8:
                        continue
                    provider = int(support_candidates[support_index, observed_slot, 0])
                    target_slots = np.flatnonzero(mask[q] & (candidates[q, :, 0] == provider))
                    if len(target_slots):
                        choices[q] = int(target_slots[0])
            if mode in {"surface", "support_transfer"}:
                deferred = np.asarray(
                    [
                        bool(candidates[q, choices[q], 11]) if choices[q] < 8 else False
                        for q in range(q_count)
                    ]
                )
            else:
                deferred = np.zeros(q_count, dtype=bool)
            rows.append({
                "case_id": case["case_id"],
                "ledger_json": write_ledger(choices, candidates[:, :, 0], q_count, m_count, deferred),
            })
    return pd.DataFrame(rows)


def main() -> None:
    sample = pd.read_csv(PUBLIC / "sample_submission.csv")
    print(f"empty_unresolved={grade(sample, ANSWERS):.6f}")
    for mode in ("first", "surface", "support_transfer"):
        print(f"{mode}={grade(make_submission(mode), ANSWERS):.6f}")
    reference_path = ROOT / "qa" / "reference_submission_v2.csv"
    if reference_path.is_file():
        try:
            print(f"reference={grade(pd.read_csv(reference_path), ANSWERS):.6f}")
        except ValueError as exc:
            print(f"reference=skipped ({exc})")


if __name__ == "__main__":
    main()
