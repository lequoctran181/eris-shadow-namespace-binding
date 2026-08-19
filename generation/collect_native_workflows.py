#!/usr/bin/env python3
"""Build and execute real plugin fixtures for the Shadow Namespace dataset."""

from __future__ import annotations

import argparse
from concurrent.futures import ThreadPoolExecutor
import csv
import gzip
import hashlib
import json
import platform
from pathlib import Path
import re
import shutil
import subprocess
import sys
from typing import Iterable

import numpy as np
import pandas as pd
import yaml


ROOT = Path(__file__).resolve().parents[1]
CONFIG_PATH = Path(__file__).with_name("generation_config.yaml")
LLVM_ELF_ROOT = ROOT / "sources" / "llvm-project" / "lld" / "test" / "ELF"
CAPTURE_DIR = Path(__file__).with_name("native_capture")
WORKER = Path(__file__).with_name("native_loader_worker.py")
FINALIZER = Path(__file__).with_name("finalize_native_capture.py")
TOKEN_AXES = (
    "weak",
    "hidden",
    "protected",
    "visibility",
    "version",
    "shared",
    "as-needed",
    "symbolic",
    "archive",
    "wrap",
    "undefined",
    "lazy",
    "preempt",
    "export",
    "gc-sections",
    "relro",
    "ifunc",
    "tls",
)


def _sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1 << 20), b""):
            digest.update(chunk)
    return digest.hexdigest()


def _command_output(command: list[str]) -> str:
    result = subprocess.run(command, check=True, text=True, capture_output=True)
    return result.stdout.strip() or result.stderr.strip()


def _scan_profiles() -> list[dict[str, object]]:
    if not LLVM_ELF_ROOT.is_dir():
        raise FileNotFoundError(
            f"Missing sparse LLVM checkout at {LLVM_ELF_ROOT}. "
            "Clone llvm-project with lld/test/ELF before collecting."
        )
    profiles: list[dict[str, object]] = []
    for path in sorted(LLVM_ELF_ROOT.rglob("*")):
        if not path.is_file() or path.stat().st_size > 250_000:
            continue
        try:
            text = path.read_text(encoding="utf-8")
        except UnicodeDecodeError:
            continue
        lowered = text.lower()
        run_count = len(re.findall(r"(?m)^\s*(?:#|//|;)?\s*run:", lowered))
        if run_count == 0:
            continue
        digest = hashlib.sha256(text.encode("utf-8")).hexdigest()
        token_counts = [lowered.count(token) for token in TOKEN_AXES]
        profiles.append({
            "path": str(path.relative_to(ROOT / "sources" / "llvm-project")),
            "absolute_path": path,
            "sha256": digest,
            "bytes": len(text.encode("utf-8")),
            "lines": len(text.splitlines()),
            "run_count": run_count,
            "check_count": lowered.count("check"),
            "token_counts": token_counts,
        })
    if not profiles:
        raise RuntimeError("No LLVM lld ELF regression profiles with RUN lines were found")
    return profiles


def _select_diverse_profiles(profiles: list[dict[str, object]], count: int) -> list[dict[str, object]]:
    if len(profiles) < count:
        raise ValueError(f"Need {count} profiles but found only {len(profiles)}")
    numeric = []
    for profile in profiles:
        digest_bytes = bytes.fromhex(str(profile["sha256"]))
        row = [
            np.log1p(int(profile["bytes"])),
            np.log1p(int(profile["lines"])),
            np.log1p(int(profile["run_count"])),
            np.log1p(int(profile["check_count"])),
            *np.log1p(np.asarray(profile["token_counts"], dtype=np.float64)),
            *(np.frombuffer(digest_bytes[:6], dtype=np.uint8).astype(np.float64) / 255.0),
        ]
        numeric.append(row)
    matrix = np.asarray(numeric, dtype=np.float64)
    matrix = (matrix - matrix.mean(axis=0)) / np.maximum(matrix.std(axis=0), 1e-6)
    selected = [int(np.argmax(np.linalg.norm(matrix, axis=1)))]
    min_distance = np.full(len(profiles), np.inf)
    for _ in range(1, count):
        last = matrix[selected[-1]]
        distance = np.square(matrix - last).sum(axis=1)
        min_distance = np.minimum(min_distance, distance)
        min_distance[selected] = -1.0
        selected.append(int(np.argmax(min_distance)))
    return [profiles[index] for index in selected]


def _profile_tags(counts: Iterable[int]) -> str:
    pairs = [(token, int(value)) for token, value in zip(TOKEN_AXES, counts, strict=True) if value]
    pairs.sort(key=lambda item: (-item[1], item[0]))
    return ";".join(token for token, _ in pairs[:6]) or "baseline-link"


def _export_matrix(profile: dict[str, object], family: int) -> np.ndarray:
    seed_words = np.frombuffer(bytes.fromhex(str(profile["sha256"])), dtype=np.uint8).astype(np.uint32)
    entropy = np.random.SeedSequence([20260805, family, *map(int, seed_words[:8])])
    rng = np.random.default_rng(entropy)
    counts = np.asarray(profile["token_counts"], dtype=np.int64)
    weak_bias = min(0.12, 0.015 * int(counts[0]))
    hidden_bias = min(0.12, 0.015 * int(counts[1] + counts[3]))
    probabilities = np.asarray(
        [0.20, 0.13 + hidden_bias, 0.24 + weak_bias, 0.43 - hidden_bias - weak_bias],
        dtype=np.float64,
    )
    probabilities = np.maximum(probabilities, 0.05)
    probabilities /= probabilities.sum()
    matrix = rng.choice(4, size=(8, 6), p=probabilities).astype(np.uint8)
    for symbol in range(6):
        visible = np.flatnonzero(matrix[:, symbol] >= 2)
        if len(visible) < 3:
            replacements = rng.choice(8, size=3, replace=False)
            matrix[replacements, symbol] = rng.choice([2, 3], size=3, p=[0.35, 0.65])
        if np.all(matrix[:, symbol] >= 2):
            matrix[int(rng.integers(8)), symbol] = int(rng.integers(2))
    return matrix


def _dependency_matrix(profile: dict[str, object], family: int) -> np.ndarray:
    digest = np.frombuffer(bytes.fromhex(str(profile["sha256"])), dtype=np.uint8).astype(np.uint32)
    rng = np.random.default_rng(
        np.random.SeedSequence([20260805, family, 0xDA6, *map(int, digest[16:24])])
    )
    counts = np.asarray(profile["token_counts"], dtype=np.int64)
    edge_bias = min(0.35, 0.025 * int(counts[5] + counts[7] + counts[8] + counts[10]))
    matrix = np.zeros((8, 8), dtype=np.uint8)
    for child in range(1, 8):
        probabilities = np.asarray([0.20 - edge_bias / 2, 0.55, 0.25 + edge_bias / 2])
        probabilities = np.maximum(probabilities, 0.05)
        probabilities /= probabilities.sum()
        parent_count = min(child, int(rng.choice([0, 1, 2], p=probabilities)))
        if parent_count:
            parents = rng.choice(child, size=parent_count, replace=False)
            matrix[child, parents] = 1
    if matrix.sum() < 5:
        for child in range(1, 8):
            matrix[child, int(rng.integers(child))] = 1
            if matrix.sum() >= 5:
                break
    return matrix


def _provider_source(
    family: int,
    provider: int,
    kinds: np.ndarray,
    dependencies: np.ndarray,
    profile_path: str,
) -> str:
    lines = [
        "/* Controlled native-loader fixture.",
        f" * Family: SNF-{family:03d}; provider: {provider}; profile: {profile_path}",
        " */",
        f'__attribute__((visibility("default"))) int snb_anchor_{provider}(void) {{ return {family * 16 + provider}; }}',
    ]
    dependency_ids = list(map(int, np.flatnonzero(dependencies)))
    for dependency in dependency_ids:
        lines.append(f"extern int snb_anchor_{dependency}(void);")
    if dependency_ids:
        expression = " + ".join(f"snb_anchor_{dependency}()" for dependency in dependency_ids)
        lines.append(
            f'__attribute__((visibility("default"))) int snb_dependency_touch_{provider}(void) {{ return {expression}; }}'
        )
    for symbol, kind_raw in enumerate(kinds):
        kind = int(kind_raw)
        if kind == 0:
            continue
        attributes = {
            1: '__attribute__((visibility("hidden")))',
            2: '__attribute__((visibility("default"), weak))',
            3: '__attribute__((visibility("default")))',
        }[kind]
        return_code = (family + 1) * 1000 + provider * 10 + symbol
        lines.append(f"{attributes} int snb_symbol_{symbol}(void) {{ return {return_code}; }}")
    return "\n".join(lines) + "\n"


def _write_fixture_sources(
    family_dir: Path,
    family: int,
    profile: dict[str, object],
    export_kind: np.ndarray,
    dependencies: np.ndarray,
) -> None:
    family_dir.mkdir(parents=True, exist_ok=True)
    for provider in range(8):
        source = _provider_source(
            family,
            provider,
            export_kind[provider],
            dependencies[provider],
            str(profile["path"]),
        )
        (family_dir / f"provider_{provider}.c").write_text(source, encoding="ascii")


def _compile_one(
    family_dir: Path,
    provider: int,
    dependencies: np.ndarray,
) -> dict[str, object]:
    source = family_dir / f"provider_{provider}.c"
    output = family_dir / f"provider_{provider}.dylib"
    command = [
        "/usr/bin/clang",
        "-dynamiclib",
        "-O0",
        "-fno-common",
        str(source),
        *[
            str(family_dir / f"provider_{dependency}.dylib")
            for dependency in np.flatnonzero(dependencies)
        ],
        "-Wl,-install_name,@loader_path/" + output.name,
        "-o",
        str(output),
    ]
    subprocess.run(command, check=True, capture_output=True)
    uuid_output = _command_output(["/usr/bin/dwarfdump", "--uuid", str(output)])
    uuid_match = re.search(r"UUID: ([0-9A-F-]+)", uuid_output)
    portable_command = [
        "/usr/bin/clang",
        "-dynamiclib",
        "-O0",
        "-fno-common",
        source.name,
        *[
            f"provider_{dependency}.dylib"
            for dependency in np.flatnonzero(dependencies)
        ],
        "-Wl,-install_name,@loader_path/" + output.name,
        "-o",
        output.name,
    ]
    return {
        "provider": provider,
        "source_sha256": _sha256(source),
        "binary_sha256": _sha256(output),
        "binary_uuid": uuid_match.group(1) if uuid_match else "unknown",
        "dependencies_json": json.dumps(
            list(map(int, np.flatnonzero(dependencies))), separators=(",", ":")
        ),
        "compile_command": " ".join(portable_command),
    }


def _compile_fixtures(
    family_dir: Path,
    dependencies: np.ndarray,
) -> list[dict[str, object]]:
    return [
        _compile_one(family_dir, provider, dependencies[provider])
        for provider in range(8)
    ]


def _context_specs(family: int, profile: dict[str, object], count: int) -> list[dict[str, object]]:
    digest = np.frombuffer(bytes.fromhex(str(profile["sha256"])), dtype=np.uint8).astype(np.uint32)
    rng = np.random.default_rng(np.random.SeedSequence([20260805, family, 0xD1D, *map(int, digest[8:16])]))
    specs: list[dict[str, object]] = []
    for context in range(count):
        loaded_count = 8
        order = list(range(8))
        rng.shuffle(order)
        global_mask = (rng.random(loaded_count) < (0.48 + 0.08 * (context % 4))).astype(int)
        if not global_mask.any():
            global_mask[int(rng.integers(loaded_count))] = 1
        lazy_mask = (rng.random(loaded_count) < (0.28 + 0.12 * (context % 3))).astype(int)
        specs.append({
            "context": context,
            "order": order,
            "global_mask": list(map(int, global_mask)),
            "lazy_mask": list(map(int, lazy_mask)),
        })
    return specs


def _provider_from_lookup(lookup: dict[str, object], family: int) -> int:
    code = int(lookup["return_code"])
    if code < 0:
        return -1
    family_code = code // 1000 - 1
    provider = (code % 1000) // 10
    if family_code != family or not 0 <= provider < 8:
        raise RuntimeError(f"Unexpected fixture return code {code} for family {family}")
    return provider


def _run_context(family_dir: Path, spec: dict[str, object]) -> tuple[dict[str, object], dict[str, object]]:
    order = list(map(int, spec["order"]))
    scopes = list(map(int, spec["global_mask"]))
    bindings = list(map(int, spec["lazy_mask"]))
    command = [
        sys.executable,
        str(WORKER),
        "--fixture-dir",
        str(family_dir),
        "--order",
        ",".join(map(str, order)),
        "--global-mask",
        ",".join(map(str, scopes)),
        "--lazy-mask",
        ",".join(map(str, bindings)),
    ]
    completed = subprocess.run(command, check=True, text=True, capture_output=True)
    return spec, json.loads(completed.stdout)


def collect(rebuild: bool) -> None:
    cfg = yaml.safe_load(CONFIG_PATH.read_text())
    family_count = int(cfg["family_count"])
    context_count = int(cfg.get("native_contexts", 16))
    profiles = _select_diverse_profiles(_scan_profiles(), family_count)

    if rebuild and CAPTURE_DIR.exists():
        shutil.rmtree(CAPTURE_DIR)
    fixtures_root = CAPTURE_DIR / "fixtures"
    CAPTURE_DIR.mkdir(parents=True, exist_ok=True)

    export_kind = np.zeros((family_count, 8, 6), dtype=np.uint8)
    dependency_graph = np.zeros((family_count, 8, 8), dtype=np.uint8)
    loaded_mask = np.zeros((family_count, context_count, 8), dtype=np.uint8)
    load_rank = np.full((family_count, context_count, 8), -1, dtype=np.int8)
    global_mask = np.zeros((family_count, context_count, 8), dtype=np.uint8)
    lazy_mask = np.zeros((family_count, context_count, 8), dtype=np.uint8)
    root_outcome = np.full((family_count, context_count, 6), -1, dtype=np.int8)
    direct_outcome = np.full((family_count, context_count, 8, 6), -1, dtype=np.int8)
    load_elapsed_ns = np.zeros((family_count, context_count, 8), dtype=np.int64)
    lookup_elapsed_ns = np.zeros((family_count, context_count, 9, 6), dtype=np.int64)
    profile_rows: list[dict[str, object]] = []
    binary_rows: list[dict[str, object]] = []
    event_count = 0
    events_path = CAPTURE_DIR / "native_trace_events.jsonl.gz"

    with gzip.open(events_path, "wt", encoding="utf-8", newline="") as event_file:
        for family, profile in enumerate(profiles):
            family_dir = fixtures_root / f"SNF-{family:03d}"
            kinds = _export_matrix(profile, family)
            dependencies = _dependency_matrix(profile, family)
            export_kind[family] = kinds
            dependency_graph[family] = dependencies
            _write_fixture_sources(family_dir, family, profile, kinds, dependencies)
            compiled = _compile_fixtures(family_dir, dependencies)
            for record in compiled:
                binary_rows.append({"family_id": f"SNF-{family:03d}", **record})

            context_specs = _context_specs(family, profile, context_count)
            family_event_count = 0
            with ThreadPoolExecutor(max_workers=min(10, context_count)) as executor:
                context_results = list(
                    executor.map(lambda spec: _run_context(family_dir, spec), context_specs)
                )
            for spec, result in context_results:
                context = int(spec["context"])
                order = list(map(int, spec["order"]))
                scopes = list(map(int, spec["global_mask"]))
                bindings = list(map(int, spec["lazy_mask"]))
                for rank, (provider, is_global, is_lazy) in enumerate(
                    zip(order, scopes, bindings, strict=True)
                ):
                    loaded_mask[family, context, provider] = 1
                    load_rank[family, context, provider] = rank
                    global_mask[family, context, provider] = is_global
                    lazy_mask[family, context, provider] = is_lazy
                for event in result["load_events"]:
                    provider = int(event["provider"])
                    load_elapsed_ns[family, context, provider] = int(event["elapsed_ns"])
                for lookup in result["root_lookups"]:
                    symbol = int(lookup["symbol_index"])
                    root_outcome[family, context, symbol] = _provider_from_lookup(lookup, family)
                    lookup_elapsed_ns[family, context, 0, symbol] = int(lookup["elapsed_ns"])
                for lookup in result["direct_lookups"]:
                    symbol = int(lookup["symbol_index"])
                    provider_handle = int(str(lookup["handle"]).split("_")[-1])
                    direct_outcome[family, context, provider_handle, symbol] = _provider_from_lookup(
                        lookup, family
                    )
                    lookup_elapsed_ns[family, context, provider_handle + 1, symbol] = int(
                        lookup["elapsed_ns"]
                    )

                for event in [*result["load_events"], *result["root_lookups"], *result["direct_lookups"]]:
                    event_file.write(json.dumps({
                        "family_id": f"SNF-{family:03d}",
                        "context_id": f"CTX-{context:02d}",
                        **event,
                    }, ensure_ascii=True, separators=(",", ":"), sort_keys=True) + "\n")
                    event_count += 1
                    family_event_count += 1

            source_digest = hashlib.sha256(
                "".join(record["source_sha256"] for record in compiled).encode("ascii")
            ).hexdigest()
            binary_digest = hashlib.sha256(
                "".join(record["binary_sha256"] for record in compiled).encode("ascii")
            ).hexdigest()
            profile_rows.append({
                "family_id": f"SNF-{family:03d}",
                "upstream_path": profile["path"],
                "upstream_sha256": profile["sha256"],
                "upstream_bytes": profile["bytes"],
                "upstream_lines": profile["lines"],
                "upstream_run_directives": profile["run_count"],
                "upstream_check_directives": profile["check_count"],
                "semantic_tags": _profile_tags(profile["token_counts"]),
                "fixture_source_set_sha256": source_digest,
                "fixture_binary_set_sha256": binary_digest,
                "native_contexts": context_count,
                "captured_events": family_event_count,
            })
            if (family + 1) % 10 == 0 or family + 1 == family_count:
                print(f"captured {family + 1}/{family_count} workflow families", flush=True)

    np.savez_compressed(
        CAPTURE_DIR / "native_capture.npz",
        export_kind=export_kind,
        dependency_graph=dependency_graph,
        loaded_mask=loaded_mask,
        load_rank=load_rank,
        global_mask=global_mask,
        lazy_mask=lazy_mask,
        root_outcome=root_outcome,
        direct_outcome=direct_outcome,
        load_elapsed_ns=load_elapsed_ns,
        lookup_elapsed_ns=lookup_elapsed_ns,
    )
    pd.DataFrame(profile_rows).to_csv(CAPTURE_DIR / "workflow_profiles.csv", index=False)
    pd.DataFrame(binary_rows).to_csv(CAPTURE_DIR / "fixture_binary_manifest.csv", index=False)

    llvm_commit = _command_output(
        ["git", "-C", str(ROOT / "sources" / "llvm-project"), "rev-parse", "HEAD"]
    )
    toolchain = {
        "capture_platform": platform.platform(),
        "machine": platform.machine(),
        "python": platform.python_version(),
        "clang": _command_output(["/usr/bin/clang", "--version"]),
        "macos": _command_output(["/usr/bin/sw_vers"]),
        "llvm_project_commit": llvm_commit,
        "llvm_profile_root": "lld/test/ELF",
        "collector": "collect_native_workflows.py",
        "worker": "native_loader_worker.py",
    }
    (CAPTURE_DIR / "capture_toolchain.json").write_text(
        json.dumps(toolchain, indent=2, sort_keys=True) + "\n"
    )
    active_direct = np.repeat(loaded_mask[..., None].astype(bool), 6, axis=-1)
    direct_resolved = active_direct & (direct_outcome >= 0)
    handle_ids = np.broadcast_to(
        np.arange(8, dtype=np.int8)[None, None, :, None], direct_outcome.shape
    )
    first_global = np.zeros((family_count, context_count), dtype=np.int8)
    for family in range(family_count):
        for context in range(context_count):
            providers = np.flatnonzero(global_mask[family, context])
            first_global[family, context] = int(
                providers[np.argmin(load_rank[family, context, providers])]
            )
    root_resolved = root_outcome >= 0
    summary = {
        "workflow_families": family_count,
        "contexts_per_family": context_count,
        "providers_per_family": 8,
        "symbols_per_family": 6,
        "native_plugin_binaries_built": family_count * 8,
        "native_dependency_edges": int(dependency_graph.sum()),
        "isolated_loader_processes": family_count * context_count,
        "captured_events": event_count,
        "resolved_root_fraction": float(np.mean(root_outcome >= 0)),
        "resolved_direct_fraction": float(np.mean(direct_outcome[active_direct] >= 0)),
        "direct_dependency_provider_fraction": float(
            np.mean(direct_outcome[direct_resolved] != handle_ids[direct_resolved])
        ),
        "root_nonfirst_explicit_global_fraction": float(
            np.mean(
                root_outcome[root_resolved]
                != np.broadcast_to(first_global[..., None], root_outcome.shape)[root_resolved]
            )
        ),
        "capture_npz_sha256": _sha256(CAPTURE_DIR / "native_capture.npz"),
        "event_log_sha256": _sha256(events_path),
    }
    (CAPTURE_DIR / "capture_summary.json").write_text(
        json.dumps(summary, indent=2, sort_keys=True) + "\n"
    )
    subprocess.run([sys.executable, str(FINALIZER)], check=True)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--rebuild", action="store_true")
    args = parser.parse_args()
    collect(args.rebuild)
