"""Deterministically create public and private Shadow Namespace data."""

from __future__ import annotations

import base64
import csv
import json
import shutil
from pathlib import Path
from typing import Any

import numpy as np
import pandas as pd


SEED = 20260805
P_MAX = 8
PUBLIC_SUPPORT_FILES = (
    "CAPTURE_PROTOCOL.md",
    "DATASET_DESCRIPTION.md",
    "LICENSE.md",
    "LLVM_LICENSE.txt",
    "README.md",
    "SOURCES.md",
    "capture_summary.json",
    "capture_toolchain.json",
    "generation_config.yaml",
    "generation_summary.json",
    "loader_semantics.json",
    "task_schema.json",
    "tensor_schema.json",
)
RAW_AUDIT_COLUMNS = (
    "capture_profile_id",
    "upstream_profile_path",
    "upstream_profile_sha256",
    "fixture_binary_set_sha256",
    "target_hard_fraction",
    "native_context_map_json",
    "support_condition_map_json",
    "target_condition_map_json",
)
INPUT_ARRAYS = (
    "module_features",
    "module_mask",
    "context_features",
    "context_mask",
    "query_features",
    "query_mask",
    "candidate_features",
    "candidate_mask",
    "support_query_features",
    "support_candidate_features",
    "support_candidate_mask",
    "support_choice",
    "probe_trace",
    "family_index",
)
TARGET_ARRAYS = (
    "binding_target",
    "scope_target",
    "deferred_target",
    "candidate_behavior",
    "program_target",
    "case_weight",
)


def _locate_raw_root(raw: Path) -> Path:
    if (raw / "binding_worlds_full.npz").is_file():
        return raw
    matches = sorted(raw.rglob("binding_worlds_full.npz"))
    if len(matches) != 1:
        raise FileNotFoundError(
            "Expected exactly one binding_worlds_full.npz; "
            f"found {len(matches)}"
        )
    return matches[0].parent


def _reset(path: Path) -> None:
    path.mkdir(parents=True, exist_ok=True)
    for child in path.iterdir():
        if child.is_dir():
            shutil.rmtree(child)
        else:
            child.unlink()


def _compact(value: Any) -> str:
    return json.dumps(value, ensure_ascii=True, separators=(",", ":"), sort_keys=True)


def _pack_bits(value: np.ndarray) -> str:
    packed = np.packbits(value.astype(np.uint8).reshape(-1), bitorder="little")
    return base64.b64encode(packed.tobytes()).decode("ascii")


def _default_ledger(query_count: int) -> str:
    return _compact({
        "bindings": [f"Q{q:02d}=U" for q in range(query_count)],
        "scope_roots": [],
        "deferred": [],
    })


def prepare(raw: Path, public: Path, private: Path) -> None:
    raw_root = _locate_raw_root(Path(raw))
    manifest = pd.read_csv(raw_root / "cases_full.csv")
    if manifest["case_id"].duplicated().any():
        raise ValueError("case_id values must be unique")
    if set(manifest["split"]) != {"train", "test"}:
        raise ValueError("Raw manifest must contain train and test rows")

    with np.load(raw_root / "binding_worlds_full.npz", allow_pickle=False) as source:
        n = len(manifest)
        if any(source[name].shape[0] != n for name in INPUT_ARRAYS + TARGET_ARRAYS):
            raise ValueError("Raw array row counts do not match cases_full.csv")
        train_idx = manifest.index[manifest["split"] == "train"].to_numpy()
        test_idx = manifest.index[manifest["split"] == "test"].to_numpy()
        train_idx = np.random.default_rng(SEED + 1).permutation(train_idx)
        test_idx = np.random.default_rng(SEED + 2).permutation(test_idx)

        _reset(Path(public))
        _reset(Path(private))

        train_payload = {name: source[name][train_idx] for name in INPUT_ARRAYS + TARGET_ARRAYS}
        test_payload = {name: source[name][test_idx] for name in INPUT_ARRAYS}
        np.savez_compressed(Path(public) / "train.npz", **train_payload)
        np.savez_compressed(Path(public) / "test.npz", **test_payload)

        train_manifest = manifest.iloc[train_idx].drop(
            columns=["split", "row_index", *RAW_AUDIT_COLUMNS], errors="ignore"
        ).reset_index(drop=True)
        test_manifest = manifest.iloc[test_idx].drop(
            columns=["split", "row_index", "case_weight", *RAW_AUDIT_COLUMNS], errors="ignore"
        ).reset_index(drop=True)
        train_manifest.to_csv(Path(public) / "train_cases.csv", index=False)
        test_manifest.to_csv(Path(public) / "test_cases.csv", index=False)

        answer_rows: list[dict[str, Any]] = []
        sample_rows: list[dict[str, str]] = []
        for public_row, raw_row in enumerate(test_idx):
            case = manifest.iloc[int(raw_row)]
            q_count = int(case["query_count"])
            m_count = int(case["module_count"])
            candidate_counts = source["candidate_mask"][raw_row, :q_count].sum(axis=1).astype(int)
            providers = source["candidate_features"][raw_row, :q_count, :, 0].astype(int)
            behavior = source["candidate_behavior"][raw_row, :q_count]
            answer_rows.append({
                "case_id": str(case["case_id"]),
                "query_count": q_count,
                "module_count": m_count,
                "candidate_counts_json": _compact(candidate_counts.tolist()),
                "candidate_providers_json": _compact(providers.tolist()),
                "binding_target_json": _compact(
                    source["binding_target"][raw_row, :q_count].astype(int).tolist()
                ),
                "scope_target_json": _compact(
                    np.flatnonzero(source["scope_target"][raw_row, :m_count]).astype(int).tolist()
                ),
                "deferred_target_json": _compact(
                    np.flatnonzero(source["deferred_target"][raw_row, :q_count]).astype(int).tolist()
                ),
                "behavior_shape_json": _compact(list(behavior.shape)),
                "behavior_bits_b64": _pack_bits(behavior),
                "case_weight": float(source["case_weight"][raw_row]),
            })
            sample_rows.append({
                "case_id": str(case["case_id"]),
                "ledger_json": _default_ledger(q_count),
            })

    pd.DataFrame(sample_rows).to_csv(Path(public) / "sample_submission.csv", index=False)
    pd.DataFrame(answer_rows).to_csv(Path(private) / "answers.csv", index=False, quoting=csv.QUOTE_MINIMAL)
    for name in PUBLIC_SUPPORT_FILES:
        source_path = raw_root / name
        if source_path.is_file():
            shutil.copy2(source_path, Path(public) / name)


if __name__ == "__main__":
    import argparse

    parser = argparse.ArgumentParser()
    parser.add_argument("raw", type=Path)
    parser.add_argument("public", type=Path)
    parser.add_argument("private", type=Path)
    args = parser.parse_args()
    prepare(args.raw, args.public, args.private)
