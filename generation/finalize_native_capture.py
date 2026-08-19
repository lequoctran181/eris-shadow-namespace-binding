#!/usr/bin/env python3
"""Canonicalize capture metadata and recompute integrity statistics."""

from __future__ import annotations

import gzip
import hashlib
import json
import os
from pathlib import Path
import re

import numpy as np
import pandas as pd


CAPTURE_DIR = Path(__file__).with_name("native_capture")


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1 << 20), b""):
            digest.update(chunk)
    return digest.hexdigest()


def canonicalize_events(path: Path) -> None:
    temporary = path.with_suffix(path.suffix + ".tmp")
    with gzip.open(path, "rt", encoding="utf-8") as source, gzip.open(
        temporary, "wt", encoding="utf-8", newline=""
    ) as target:
        for line in source:
            event = json.loads(line)
            if event.get("status") == "unresolved":
                event["error"] = "symbol_not_found"
            elif event.get("status") == "load_error":
                event["error"] = "dlopen_failed"
            elif event.get("error") is not None:
                event["error"] = None
            if event.get("provider_file"):
                event["provider_file"] = Path(str(event["provider_file"])).name
            target.write(
                json.dumps(event, ensure_ascii=True, separators=(",", ":"), sort_keys=True)
                + "\n"
            )
    os.replace(temporary, path)


def canonicalize_binary_manifest(path: Path) -> None:
    frame = pd.read_csv(path, dtype={"dependencies_json": str})
    commands = []
    for _, row in frame.iterrows():
        provider = int(row["provider"])
        dependencies = list(map(int, json.loads(row["dependencies_json"])))
        command = [
            "/usr/bin/clang",
            "-dynamiclib",
            "-O0",
            "-fno-common",
            f"provider_{provider}.c",
            *[f"provider_{dependency}.dylib" for dependency in dependencies],
            f"-Wl,-install_name,@loader_path/provider_{provider}.dylib",
            "-o",
            f"provider_{provider}.dylib",
        ]
        commands.append(" ".join(command))
    frame["compile_command"] = commands
    frame.to_csv(path, index=False)


def main() -> None:
    event_path = CAPTURE_DIR / "native_trace_events.jsonl.gz"
    binary_manifest_path = CAPTURE_DIR / "fixture_binary_manifest.csv"
    capture_path = CAPTURE_DIR / "native_capture.npz"
    canonicalize_events(event_path)
    canonicalize_binary_manifest(binary_manifest_path)

    with np.load(capture_path, allow_pickle=False) as archive:
        data = {name: archive[name] for name in archive.files}
    direct = data["direct_outcome"]
    loaded = np.repeat(data["loaded_mask"][..., None].astype(bool), 6, axis=-1)
    resolved_direct = loaded & (direct >= 0)
    handle_ids = np.broadcast_to(
        np.arange(8, dtype=np.int8)[None, None, :, None], direct.shape
    )
    first_global = np.zeros(data["global_mask"].shape[:2], dtype=np.int8)
    for family in range(first_global.shape[0]):
        for context in range(first_global.shape[1]):
            providers = np.flatnonzero(data["global_mask"][family, context])
            first_global[family, context] = int(
                providers[np.argmin(data["load_rank"][family, context, providers])]
            )
    root = data["root_outcome"]
    resolved_root = root >= 0
    with gzip.open(event_path, "rt", encoding="utf-8") as handle:
        event_count = sum(1 for _ in handle)

    summary_path = CAPTURE_DIR / "capture_summary.json"
    summary = json.loads(summary_path.read_text())
    summary.update({
        "captured_events": event_count,
        "native_dependency_edges": int(data["dependency_graph"].sum()),
        "resolved_direct_fraction": float(np.mean(direct[loaded] >= 0)),
        "resolved_root_fraction": float(np.mean(resolved_root)),
        "direct_dependency_provider_fraction": float(
            np.mean(direct[resolved_direct] != handle_ids[resolved_direct])
        ),
        "root_nonfirst_explicit_global_fraction": float(
            np.mean(
                root[resolved_root]
                != np.broadcast_to(first_global[..., None], root.shape)[resolved_root]
            )
        ),
        "capture_npz_sha256": sha256(capture_path),
        "event_log_sha256": sha256(event_path),
        "fixture_binary_manifest_sha256": sha256(binary_manifest_path),
    })
    summary_path.write_text(json.dumps(summary, indent=2, sort_keys=True) + "\n")

    address_pattern = re.compile(r"0x[0-9a-fA-F]+")
    with gzip.open(event_path, "rt", encoding="utf-8") as handle:
        if any(address_pattern.search(line) for line in handle):
            raise AssertionError("Canonical event log still contains a process address")
    print(json.dumps(summary, indent=2, sort_keys=True))


if __name__ == "__main__":
    main()
