#!/usr/bin/env python3
"""Report weighted metric components for one local submission."""

from __future__ import annotations

import json
from pathlib import Path
import sys

import numpy as np
import pandas as pd

from challenge.grade import (
    WEIGHTS,
    _adjusted_rand,
    _chance_gain,
    _parse_ledger,
    _set_gain,
    _unpack_behavior,
)


def main() -> None:
    if len(sys.argv) != 3:
        raise SystemExit("Usage: score_breakdown.py <submission.csv> <answers.csv>")
    submission = pd.read_csv(Path(sys.argv[1]))
    answers = pd.read_csv(Path(sys.argv[2]))
    merged = answers.merge(submission[["case_id", "ledger_json"]], on="case_id", validate="one_to_one")
    totals = {name: [] for name in WEIGHTS}
    case_weights = []
    raw_accuracies = []
    for _, row in merged.iterrows():
        q_count = int(row["query_count"])
        m_count = int(row["module_count"])
        counts = np.asarray(json.loads(row["candidate_counts_json"]), dtype=np.int16)
        providers = np.asarray(json.loads(row["candidate_providers_json"]), dtype=np.int16)
        target = np.asarray(json.loads(row["binding_target_json"]), dtype=np.int16)
        target_scopes = list(map(int, json.loads(row["scope_target_json"])))
        target_deferred = list(map(int, json.loads(row["deferred_target_json"])))
        behavior = _unpack_behavior(row["behavior_bits_b64"], row["behavior_shape_json"])
        ledger = _parse_ledger(row["ledger_json"], q_count, m_count, counts)
        raw_binding = float(np.mean(ledger.choices == target))
        raw_accuracies.append(raw_binding)
        chance_binding = float(np.mean(1.0 / (counts.astype(float) + 1.0)))
        totals["binding"].append(_chance_gain(raw_binding, chance_binding))
        similarities = []
        chance_similarities = []
        for q in range(q_count):
            truth = behavior[q, int(target[q])]
            similarities.append(np.mean(behavior[q, int(ledger.choices[q])] == truth))
            valid = np.concatenate([behavior[q, : int(counts[q])], behavior[q, 8:9]], axis=0)
            chance_similarities.append(np.mean(np.mean(valid == truth[None], axis=1)))
        totals["behavior"].append(_chance_gain(float(np.mean(similarities)), float(np.mean(chance_similarities))))
        pred_provider = np.full(q_count, -1, dtype=np.int16)
        true_provider = np.full(q_count, -1, dtype=np.int16)
        for q in range(q_count):
            if ledger.choices[q] < 8:
                pred_provider[q] = providers[q, int(ledger.choices[q])]
            if target[q] < 8:
                true_provider[q] = providers[q, int(target[q])]
        totals["coalescence"].append(_adjusted_rand(true_provider, pred_provider))
        totals["scope"].append(_set_gain(ledger.scopes, target_scopes, m_count))
        totals["deferred"].append(_set_gain(ledger.deferred, target_deferred, q_count))
        totals["exact"].append(float(
            np.array_equal(ledger.choices, target)
            and set(ledger.scopes) == set(target_scopes)
            and set(ledger.deferred) == set(target_deferred)
        ))
        case_weights.append(float(row["case_weight"]))
    weights = np.asarray(case_weights)
    result = {
        "raw_binding_accuracy": float(np.average(raw_accuracies, weights=weights)),
        "components": {
            name: float(np.average(values, weights=weights))
            for name, values in totals.items()
        },
    }
    result["score"] = sum(WEIGHTS[name] * result["components"][name] for name in WEIGHTS)
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()
