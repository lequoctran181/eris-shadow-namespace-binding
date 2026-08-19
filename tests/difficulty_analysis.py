#!/usr/bin/env python3
"""Compute frozen overall and family-clustered difficulty landmarks."""

from __future__ import annotations

import json
from pathlib import Path

import numpy as np
import pandas as pd

from challenge.grade import _parse_ledger, _score_case, grade
from tests.evaluate_baselines import make_submission


ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / "qa" / "public"
ANSWERS = pd.read_csv(ROOT / "qa" / "private" / "answers.csv")
MANIFEST = pd.read_csv(PUBLIC / "test_cases.csv")


def family_scores(submission: pd.DataFrame) -> dict[str, float]:
    merged = ANSWERS.merge(submission[["case_id", "ledger_json"]], on="case_id", validate="one_to_one")
    merged = merged.merge(MANIFEST[["case_id", "family_id"]], on="case_id", validate="one_to_one")
    scores = []
    for _, row in merged.iterrows():
        counts = np.asarray(json.loads(row["candidate_counts_json"]), dtype=np.int16)
        ledger = _parse_ledger(
            row["ledger_json"], int(row["query_count"]), int(row["module_count"]), counts
        )
        scores.append(_score_case(ledger, row))
    merged["score"] = scores
    return {
        str(family): float(np.average(group["score"], weights=group["case_weight"]))
        for family, group in merged.groupby("family_id")
    }


def main() -> None:
    submissions = {
        "empty_unresolved": pd.read_csv(PUBLIC / "sample_submission.csv"),
        "first_candidate": make_submission("first"),
        "surface": make_submission("surface"),
        "support_transfer": make_submission("support_transfer"),
        "reference": pd.read_csv(ROOT / "qa" / "reference_submission_v2.csv"),
    }
    overall = {name: grade(submission, ANSWERS) for name, submission in submissions.items()}
    clustered = {name: family_scores(submission) for name, submission in submissions.items()}
    surface = np.asarray(list(clustered["surface"].values()))
    reference = np.asarray(list(clustered["reference"].values()))
    paired = reference - surface
    report = {
        "overall": overall,
        "private_families": len(surface),
        "surface_family_mean": float(surface.mean()),
        "surface_family_std": float(surface.std(ddof=1)),
        "surface_family_se": float(surface.std(ddof=1) / np.sqrt(len(surface))),
        "reference_family_mean": float(reference.mean()),
        "reference_family_std": float(reference.std(ddof=1)),
        "reference_family_se": float(reference.std(ddof=1) / np.sqrt(len(reference))),
        "paired_reference_minus_surface_mean": float(paired.mean()),
        "paired_gap_se": float(paired.std(ddof=1) / np.sqrt(len(paired))),
        "paired_gap_standard_errors": float(
            paired.mean() / (paired.std(ddof=1) / np.sqrt(len(paired)))
        ),
        "family_scores": clustered,
    }
    (ROOT / "qa" / "difficulty_report.json").write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps({key: value for key, value in report.items() if key != "family_scores"}, indent=2))


if __name__ == "__main__":
    main()
