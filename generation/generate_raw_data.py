#!/usr/bin/env python3
"""Build the benchmark tensors from captured native plugin-loader workflows."""

from __future__ import annotations

import hashlib
import json
from pathlib import Path
import shutil

import numpy as np
import pandas as pd
import yaml


ROOT = Path(__file__).resolve().parents[1]
CONFIG_PATH = Path(__file__).with_name("generation_config.yaml")
CAPTURE_DIR = Path(__file__).with_name("native_capture")
RAW_DIR = ROOT / "raw"


def _case_rng(seed: int, family: int, case: int) -> np.random.Generator:
    return np.random.default_rng(np.random.SeedSequence([seed, family, case, 0x424C]))


def _permute_code(value: int, permutation: np.ndarray) -> int:
    return int(permutation[int(value) % len(permutation)])


def _codebooks(rng: np.random.Generator) -> dict[str, np.ndarray]:
    return {
        "abi": rng.permutation(4),
        "symbol": rng.permutation(6),
        "scope": rng.permutation(4),
        "role": rng.permutation(4),
        "strength": rng.permutation(4),
        "visibility": rng.permutation(4),
    }


def _program_vector(
    capture: dict[str, np.ndarray],
    family: int,
    codebooks: dict[str, np.ndarray],
) -> np.ndarray:
    root = capture["root_outcome"][family]
    exports = capture["export_kind"][family]
    dominant = []
    resolved_counts = []
    for symbol in range(6):
        values = root[:, symbol]
        valid = values[values >= 0]
        dominant.append(int(np.bincount(valid, minlength=8).argmax()) if len(valid) else 8)
        resolved_counts.append(int(len(valid)))
    visible_per_provider = (exports >= 2).sum(axis=1).astype(int).tolist()
    core = np.asarray(
        [
            *dominant,
            *resolved_counts,
            *visible_per_provider,
            int(capture["dependency_graph"][family].sum()),
            int(np.sum(exports == 2)),
            int(np.sum(exports == 1)),
            int(np.sum(root < 0)),
            int(np.unique(root[root >= 0]).size),
        ],
        dtype=np.int16,
    )
    encoded = np.concatenate(
        [
            codebooks["abi"],
            codebooks["symbol"],
            codebooks["scope"],
            codebooks["role"],
            codebooks["strength"],
            codebooks["visibility"],
        ]
    ).astype(np.int16)[:24]
    if core.shape != (25,) or encoded.shape != (24,):
        raise AssertionError("Program audit vector must contain 25 native values and 24 codebook values")
    return np.concatenate([core, encoded]).astype(np.int16)


def _make_modules(
    rng: np.random.Generator,
    capture: dict[str, np.ndarray],
    family: int,
    module_count: int,
    codebooks: dict[str, np.ndarray],
    profile_digest: bytes,
) -> np.ndarray:
    modules = np.zeros((20, 14), dtype=np.int16)
    exports = capture["export_kind"][family]
    dependencies = capture["dependency_graph"][family]
    ranks = capture["load_rank"][family]
    globals_ = capture["global_mask"][family]
    for provider in range(8):
        active_ranks = ranks[:, provider]
        active_ranks = active_ranks[active_ranks >= 0]
        mean_rank = int(np.round(active_ranks.mean())) if len(active_ranks) else 8
        global_bucket = min(3, int(globals_[:, provider].sum() // 4))
        parents = np.flatnonzero(dependencies[provider])
        modules[provider] = [
            provider,
            _permute_code(global_bucket, codebooks["scope"]),
            mean_rank,
            int(parents[0]) if len(parents) else 19,
            int(len(parents)),
            int(globals_[:, provider].sum() >= 8),
            int(np.sum(exports[provider] >= 2)),
            int(np.sum(exports[provider] == 2)),
            int(np.sum(exports[provider] == 1)),
            int(np.sum(exports[provider] == 0)),
            int(profile_digest[16 + provider] % 11),
            int(profile_digest[24 + provider] % 13),
            int(profile_digest[(provider + 3) % 32] % 17),
            int(profile_digest[(provider + 11) % 32] % 31),
        ]
    for module in range(8, module_count):
        modules[module] = [
            module,
            _permute_code(int(rng.integers(4)), codebooks["scope"]),
            int(rng.integers(9)),
            int(rng.integers(module + 1)),
            int(rng.integers(4)),
            0,
            int(rng.integers(3)),
            int(rng.integers(3)),
            int(rng.integers(3)),
            int(rng.integers(3)),
            int(rng.integers(11)),
            int(rng.integers(13)),
            int(rng.integers(17)),
            int(rng.integers(31)),
        ]
    return modules


def _make_contexts(
    capture: dict[str, np.ndarray],
    family: int,
    native_contexts: np.ndarray,
    codebooks: dict[str, np.ndarray],
    profile_digest: bytes,
) -> np.ndarray:
    contexts = np.zeros((8, 12), dtype=np.int16)
    for local_context, native_context_raw in enumerate(native_contexts):
        native_context = int(native_context_raw)
        loaded = np.flatnonzero(capture["loaded_mask"][family, native_context])
        globals_ = np.flatnonzero(capture["global_mask"][family, native_context])
        lazy = np.flatnonzero(capture["lazy_mask"][family, native_context])
        ranks = capture["load_rank"][family, native_context]
        first_loaded = int(loaded[np.argmin(ranks[loaded])])
        first_global = int(globals_[np.argmin(ranks[globals_])])
        contexts[local_context] = [
            local_context,
            _permute_code(len(globals_) % 4, codebooks["scope"]),
            first_loaded,
            first_global,
            int(0 < len(globals_) < len(loaded)),
            int(len(lazy) >= (len(loaded) + 1) // 2),
            len(loaded),
            len(globals_),
            int(profile_digest[(native_context + 5) % 32] % 4),
            int(profile_digest[(native_context + 13) % 32] % 7),
            int(profile_digest[(native_context + 19) % 32] % 17),
            int(profile_digest[(native_context + 23) % 32] % 31),
        ]
    return contexts


def _condition_pool(
    capture: dict[str, np.ndarray],
    family: int,
    native_contexts: np.ndarray,
) -> list[dict[str, int]]:
    conditions: list[dict[str, int]] = []
    for local_context, native_context_raw in enumerate(native_contexts):
        native_context = int(native_context_raw)
        loaded = np.flatnonzero(capture["loaded_mask"][family, native_context])
        ranks = capture["load_rank"][family, native_context, loaded]
        ordered = loaded[np.argsort(ranks)]
        for symbol in range(6):
            conditions.append({
                "local_context": local_context,
                "native_context": native_context,
                "symbol": symbol,
                "lookup_mode": 0,
                "direct_provider": -1,
            })
            for offset in (0, 2):
                direct_provider = int(ordered[(symbol + offset + local_context) % len(ordered)])
                conditions.append({
                    "local_context": local_context,
                    "native_context": native_context,
                    "symbol": symbol,
                    "lookup_mode": 1,
                    "direct_provider": direct_provider,
                })
    return conditions


def _observed_provider(
    capture: dict[str, np.ndarray],
    family: int,
    condition: dict[str, int],
) -> int:
    context = condition["native_context"]
    symbol = condition["symbol"]
    if condition["lookup_mode"] == 0:
        return int(capture["root_outcome"][family, context, symbol])
    return int(
        capture["direct_outcome"][
            family,
            context,
            condition["direct_provider"],
            symbol,
        ]
    )


def _make_resolution_item(
    rng: np.random.Generator,
    capture: dict[str, np.ndarray],
    family: int,
    condition: dict[str, int],
    modules: np.ndarray,
    module_count: int,
    codebooks: dict[str, np.ndarray],
    profile_digest: bytes,
) -> tuple[np.ndarray, np.ndarray, int, int, np.ndarray]:
    query = np.zeros(14, dtype=np.int16)
    candidates = np.zeros((8, 14), dtype=np.int16)
    native_context = condition["native_context"]
    local_context = condition["local_context"]
    symbol = condition["symbol"]
    lookup_mode = condition["lookup_mode"]
    direct_provider = condition["direct_provider"]
    loaded = np.flatnonzero(capture["loaded_mask"][family, native_context]).astype(int)
    rng.shuffle(loaded)
    candidate_count = len(loaded)
    requester = int(rng.integers(8, module_count))
    global_count = int(capture["global_mask"][family, native_context].sum())
    lazy_count = int(capture["lazy_mask"][family, native_context].sum())
    abi_bucket = int(profile_digest[(symbol * 3 + native_context) % 32] % 4)
    role = int((lookup_mode + global_count + symbol) % 4)
    query[:] = [
        requester,
        local_context,
        _permute_code(abi_bucket, codebooks["abi"]),
        _permute_code(symbol, codebooks["symbol"]),
        _permute_code(global_count % 4, codebooks["scope"]),
        _permute_code(role, codebooks["role"]),
        int(lazy_count >= (candidate_count + 1) // 2),
        lookup_mode,
        direct_provider if direct_provider >= 0 else 19,
        candidate_count,
        global_count,
        int(profile_digest[(native_context + symbol + 7) % 32] % 2),
        int(profile_digest[(native_context + symbol + 17) % 32] % 17),
        int(profile_digest[(native_context + symbol + 29) % 32] % 31),
    ]

    exports = capture["export_kind"][family]
    ranks = capture["load_rank"][family, native_context]
    globals_ = capture["global_mask"][family, native_context]
    lazy = capture["lazy_mask"][family, native_context]
    for slot, provider_raw in enumerate(loaded):
        provider = int(provider_raw)
        export_kind = int(exports[provider, symbol])
        visible = int(export_kind >= 2)
        candidate_abi = int(
            profile_digest[(provider * 7 + symbol * 3 + native_context) % 32] % 4
        )
        visibility = 0 if export_kind == 0 else (1 if export_kind == 1 else 2)
        candidate_role = int(
            (int(globals_[provider]) * 2 + int(provider == direct_provider)) % 4
        )
        candidates[slot] = [
            provider,
            _permute_code(candidate_abi, codebooks["abi"]),
            _permute_code(symbol, codebooks["symbol"]),
            _permute_code(export_kind, codebooks["strength"]),
            _permute_code(visibility, codebooks["visibility"]),
            _permute_code(int(globals_[provider]) + 2 * lookup_mode, codebooks["scope"]),
            _permute_code(candidate_role, codebooks["role"]),
            int(ranks[provider]) + 1,
            int(provider == direct_provider),
            int(profile_digest[(provider + symbol * 5 + 3) % 32] % 2),
            _permute_code(
                int(globals_[provider]) + 2 * int(provider % 2), codebooks["scope"]
            ),
            int(lazy[provider]),
            int(profile_digest[(provider * 3 + symbol) % 32] % 17),
            int(profile_digest[(provider * 5 + symbol + 11) % 32] % 31),
        ]

    winner = _observed_provider(capture, family, condition)
    winner_slots = np.flatnonzero(loaded == winner)
    choice = int(winner_slots[0]) if len(winner_slots) else 8
    return query, candidates, candidate_count, choice, loaded


def _behavior_vector(
    capture: dict[str, np.ndarray],
    family: int,
    condition: dict[str, int],
    provider: int,
) -> np.ndarray:
    context = condition["native_context"]
    symbol = condition["symbol"]
    vector = np.zeros(16, dtype=np.uint8)
    if provider < 0:
        vector[:6] = (capture["root_outcome"][family, context] < 0).astype(np.uint8)
        vector[15] = 1
        return vector
    export_kind = capture["export_kind"][family, provider]
    vector[:6] = (export_kind >= 2).astype(np.uint8)
    vector[6] = int(capture["global_mask"][family, context, provider])
    vector[7] = int(capture["lazy_mask"][family, context, provider])
    vector[8] = int(capture["load_rank"][family, context, provider] < 3)
    vector[9] = int(export_kind[symbol] == 0)
    vector[10] = int(export_kind[symbol] == 1)
    vector[11] = int(export_kind[symbol] == 2)
    vector[12] = int(export_kind[symbol] == 3)
    vector[13] = int(capture["root_outcome"][family, context, symbol] == provider)
    vector[14] = int(capture["direct_outcome"][family, context, provider, symbol] == provider)
    vector[15] = int(np.any(capture["root_outcome"][family, context] == provider))
    return vector


def _render_probe(
    rng: np.random.Generator,
    capture: dict[str, np.ndarray],
    family: int,
    condition: dict[str, int],
    steps: int,
    channels: int,
    channel_permutation: np.ndarray,
) -> np.ndarray:
    context = condition["native_context"]
    symbol = condition["symbol"]
    lookup_mode = condition["lookup_mode"]
    direct_provider = condition["direct_provider"]
    loaded = np.flatnonzero(capture["loaded_mask"][family, context])
    ranks = capture["load_rank"][family, context, loaded]
    ordered = loaded[np.argsort(ranks)]
    load_durations = capture["load_elapsed_ns"][family, context, ordered].astype(np.float64)
    handle_index = 0 if lookup_mode == 0 else direct_provider + 1
    lookup_duration = float(capture["lookup_elapsed_ns"][family, context, handle_index, symbol])
    durations = np.concatenate([load_durations, [max(1.0, lookup_duration)]])
    log_durations = np.log1p(durations)
    cumulative = np.cumsum(log_durations)
    positions = 10 + np.round(220 * cumulative / max(cumulative[-1], 1.0)).astype(int)

    trace = rng.normal(0.0, 0.012, size=(steps, channels)).astype(np.float32)
    trace += rng.normal(0.0, 0.003, size=(steps, 1)).astype(np.float32)
    time_axis = np.arange(steps, dtype=np.float32)
    for event_index, provider_raw in enumerate(ordered):
        provider = int(provider_raw)
        rank = int(capture["load_rank"][family, context, provider])
        event = np.asarray(
            [
                1.0,
                1.0 if capture["global_mask"][family, context, provider] else -1.0,
                1.0 if capture["lazy_mask"][family, context, provider] else -1.0,
                (provider + 1) / 8.0,
                0.0,
                1.0,
                (rank + 1) / 8.0,
                log_durations[event_index] / max(log_durations.max(), 1.0),
            ],
            dtype=np.float32,
        )
        width = 1.8 + 0.25 * (rank % 3)
        pulse = np.exp(-0.5 * ((time_axis - positions[event_index]) / width) ** 2)
        trace += pulse[:, None] * event[channel_permutation][None, :]

    winner = _observed_provider(capture, family, condition)
    lookup_event = np.asarray(
        [
            -1.0,
            1.0 if lookup_mode == 0 else -1.0,
            1.0 if lookup_mode == 1 else -1.0,
            (direct_provider + 1) / 8.0 if direct_provider >= 0 else 0.0,
            (symbol + 1) / 6.0,
            1.0 if winner >= 0 else -1.0,
            (winner + 1) / 8.0 if winner >= 0 else 0.0,
            log_durations[-1] / max(log_durations.max(), 1.0),
        ],
        dtype=np.float32,
    )
    lookup_pulse = np.exp(-0.5 * ((time_axis - positions[-1]) / 3.0) ** 2)
    trace += 1.25 * lookup_pulse[:, None] * lookup_event[channel_permutation][None, :]
    return trace.astype(np.float32)


def _hash_files() -> None:
    hashes: dict[str, str] = {}
    for path in sorted(RAW_DIR.iterdir()):
        if path.is_file() and path.name != "raw_hashes.json":
            digest = hashlib.sha256()
            with path.open("rb") as handle:
                for chunk in iter(lambda: handle.read(1 << 20), b""):
                    digest.update(chunk)
            hashes[path.name] = digest.hexdigest()
    (RAW_DIR / "raw_hashes.json").write_text(json.dumps(hashes, indent=2) + "\n")


def generate() -> None:
    cfg = yaml.safe_load(CONFIG_PATH.read_text())
    seed = int(cfg["seed"])
    family_count = int(cfg["family_count"])
    train_family_count = int(cfg["train_family_count"])
    cases_per_family = int(cfg["cases_per_family"])
    n = family_count * cases_per_family
    support_count = int(cfg["support_queries"])
    q_max = int(cfg["max_queries"])
    p_max = int(cfg["max_candidates"])
    steps = int(cfg["probe_steps"])
    channels = int(cfg["probe_channels"])

    capture_path = CAPTURE_DIR / "native_capture.npz"
    profile_path = CAPTURE_DIR / "workflow_profiles.csv"
    if not capture_path.is_file() or not profile_path.is_file():
        raise FileNotFoundError(
            "Native capture is missing. Run generation/collect_native_workflows.py --rebuild first."
        )
    with np.load(capture_path, allow_pickle=False) as archive:
        capture = {name: archive[name] for name in archive.files}
    profiles = pd.read_csv(profile_path)
    if capture["root_outcome"].shape[0] != family_count or len(profiles) != family_count:
        raise ValueError("Native capture family count does not match generation_config.yaml")

    RAW_DIR.mkdir(parents=True, exist_ok=True)
    arrays = {
        "module_features": np.zeros((n, 20, 14), dtype=np.int16),
        "module_mask": np.zeros((n, 20), dtype=np.uint8),
        "context_features": np.zeros((n, 8, 12), dtype=np.int16),
        "context_mask": np.ones((n, 8), dtype=np.uint8),
        "query_features": np.zeros((n, q_max, 14), dtype=np.int16),
        "query_mask": np.zeros((n, q_max), dtype=np.uint8),
        "candidate_features": np.zeros((n, q_max, p_max, 14), dtype=np.int16),
        "candidate_mask": np.zeros((n, q_max, p_max), dtype=np.uint8),
        "support_query_features": np.zeros((n, support_count, 14), dtype=np.int16),
        "support_candidate_features": np.zeros((n, support_count, p_max, 14), dtype=np.int16),
        "support_candidate_mask": np.zeros((n, support_count, p_max), dtype=np.uint8),
        "support_choice": np.full((n, support_count), p_max, dtype=np.int8),
        "probe_trace": np.zeros((n, support_count, steps, channels), dtype=np.float32),
        "binding_target": np.full((n, q_max), p_max, dtype=np.int8),
        "scope_target": np.zeros((n, 20), dtype=np.uint8),
        "deferred_target": np.zeros((n, q_max), dtype=np.uint8),
        "candidate_behavior": np.zeros((n, q_max, p_max + 1, 16), dtype=np.uint8),
        "program_target": np.zeros((n, 49), dtype=np.int16),
        "family_index": np.zeros(n, dtype=np.int16),
        "case_weight": np.ones(n, dtype=np.float32),
        "split_code": np.zeros(n, dtype=np.uint8),
    }

    split_order = np.random.default_rng(seed + 991).permutation(family_count)
    train_set = set(map(int, split_order[:train_family_count]))
    manifests: list[dict[str, object]] = []
    row = 0
    for family in range(family_count):
        profile = profiles.iloc[family]
        profile_digest = bytes.fromhex(str(profile["upstream_sha256"]))
        split = "train" if family in train_set else "test"

        for case_local in range(cases_per_family):
            rng = _case_rng(seed, family, case_local)
            anonymization_rng = np.random.default_rng(
                np.random.SeedSequence([seed, family, case_local, 0xC0DE])
            )
            codebooks = _codebooks(anonymization_rng)
            program = _program_vector(capture, family, codebooks)
            channel_permutation = anonymization_rng.permutation(channels)
            case_id = f"SNB-{family:03d}-{case_local:02d}"
            module_count = int(rng.integers(12, 21))
            native_contexts = rng.choice(
                capture["root_outcome"].shape[1], size=8, replace=False
            ).astype(int)
            modules = _make_modules(
                rng, capture, family, module_count, codebooks, profile_digest
            )
            contexts = _make_contexts(
                capture, family, native_contexts, codebooks, profile_digest
            )
            arrays["module_features"][row] = modules
            arrays["module_mask"][row, :module_count] = 1
            arrays["context_features"][row] = contexts

            pool = _condition_pool(capture, family, native_contexts)
            root_pool = [condition for condition in pool if condition["lookup_mode"] == 0]
            direct_pool = [condition for condition in pool if condition["lookup_mode"] == 1]
            support_conditions = [
                *[root_pool[index] for index in rng.choice(len(root_pool), size=12, replace=False)],
                *[direct_pool[index] for index in rng.choice(len(direct_pool), size=12, replace=False)],
            ]
            rng.shuffle(support_conditions)
            for support_index, condition in enumerate(support_conditions):
                query, candidates, candidate_count, choice, _ = _make_resolution_item(
                    rng,
                    capture,
                    family,
                    condition,
                    modules,
                    module_count,
                    codebooks,
                    profile_digest,
                )
                arrays["support_query_features"][row, support_index] = query
                arrays["support_candidate_features"][row, support_index] = candidates
                arrays["support_candidate_mask"][row, support_index, :candidate_count] = 1
                arrays["support_choice"][row, support_index] = choice
                arrays["probe_trace"][row, support_index] = _render_probe(
                    rng,
                    capture,
                    family,
                    condition,
                    steps,
                    channels,
                    channel_permutation,
                )

            query_count = int(rng.integers(23, q_max + 1))
            support_keys = {
                (c["native_context"], c["symbol"], c["lookup_mode"], c["direct_provider"])
                for c in support_conditions
            }
            held_out = [
                c for c in pool
                if (c["native_context"], c["symbol"], c["lookup_mode"], c["direct_provider"])
                not in support_keys
            ]
            held_out_root = [c for c in held_out if c["lookup_mode"] == 0]
            held_out_direct = [c for c in held_out if c["lookup_mode"] == 1]
            target_root_count = query_count // 2
            hard_root = []
            for condition in held_out_root:
                native_context = condition["native_context"]
                global_providers = np.flatnonzero(
                    capture["global_mask"][family, native_context]
                )
                first_global = int(
                    global_providers[
                        np.argmin(
                            capture["load_rank"][family, native_context, global_providers]
                        )
                    ]
                )
                if _observed_provider(capture, family, condition) != first_global:
                    hard_root.append(condition)
            hard_direct = [
                condition
                for condition in held_out_direct
                if _observed_provider(capture, family, condition)
                != condition["direct_provider"]
            ]

            def choose_hard(
                hard: list[dict[str, int]],
                complete: list[dict[str, int]],
                count: int,
            ) -> list[dict[str, int]]:
                chosen = [
                    hard[index]
                    for index in rng.choice(
                        len(hard), size=min(count, len(hard)), replace=False
                    )
                ] if hard else []
                chosen_keys = {
                    (
                        item["native_context"], item["symbol"], item["lookup_mode"],
                        item["direct_provider"],
                    )
                    for item in chosen
                }
                remaining = [
                    item for item in complete
                    if (
                        item["native_context"], item["symbol"], item["lookup_mode"],
                        item["direct_provider"],
                    ) not in chosen_keys
                ]
                if len(chosen) < count:
                    chosen.extend(
                        remaining[index]
                        for index in rng.choice(
                            len(remaining), size=count - len(chosen), replace=False
                        )
                    )
                return chosen

            target_conditions = [
                *choose_hard(hard_root, held_out_root, target_root_count),
                *choose_hard(
                    hard_direct,
                    held_out_direct,
                    query_count - target_root_count,
                ),
            ]
            rng.shuffle(target_conditions)
            hard_keys = {
                (
                    item["native_context"], item["symbol"], item["lookup_mode"],
                    item["direct_provider"],
                )
                for item in [*hard_root, *hard_direct]
            }
            target_hard_fraction = float(
                np.mean(
                    [
                        (
                            item["native_context"], item["symbol"], item["lookup_mode"],
                            item["direct_provider"],
                        ) in hard_keys
                        for item in target_conditions
                    ]
                )
            )

            winner_counts = np.zeros(8, dtype=np.int16)
            global_root_wins = np.zeros(8, dtype=np.int16)
            for query_index, condition in enumerate(target_conditions):
                query, candidates, candidate_count, choice, provider_order = _make_resolution_item(
                    rng,
                    capture,
                    family,
                    condition,
                    modules,
                    module_count,
                    codebooks,
                    profile_digest,
                )
                arrays["query_features"][row, query_index] = query
                arrays["candidate_features"][row, query_index] = candidates
                arrays["candidate_mask"][row, query_index, :candidate_count] = 1
                arrays["binding_target"][row, query_index] = choice
                for slot in range(p_max):
                    provider = int(provider_order[slot]) if slot < candidate_count else -1
                    arrays["candidate_behavior"][row, query_index, slot] = _behavior_vector(
                        capture, family, condition, provider
                    )
                arrays["candidate_behavior"][row, query_index, p_max] = _behavior_vector(
                    capture, family, condition, -1
                )
                winner = _observed_provider(capture, family, condition)
                if winner >= 0:
                    winner_counts[winner] += 1
                    if condition["lookup_mode"] == 0:
                        global_root_wins[winner] += 1
                    arrays["deferred_target"][row, query_index] = int(
                        capture["lazy_mask"][family, condition["native_context"], winner]
                    )
            arrays["query_mask"][row, :query_count] = 1

            selected_global_counts = capture["global_mask"][family, native_contexts].sum(axis=0)
            scope = (global_root_wins >= 2) | (
                (winner_counts >= 3) & (selected_global_counts >= 4)
            )
            arrays["scope_target"][row, :8] = scope.astype(np.uint8)
            unresolved_fraction = float(
                np.mean(arrays["binding_target"][row, :query_count] == p_max)
            )
            native_diversity = float(
                np.unique(capture["root_outcome"][family, native_contexts]).size
            ) / 9.0
            complexity = (
                query_count / q_max
                + module_count / 20.0
                + native_diversity
                + unresolved_fraction
            ) / 4.0
            arrays["case_weight"][row] = np.float32(0.75 + 0.75 * complexity)
            arrays["family_index"][row] = family
            arrays["program_target"][row] = program
            arrays["split_code"][row] = 0 if split == "train" else 1
            manifests.append({
                "case_id": case_id,
                "row_index": row,
                "family_id": f"SNF-{family:03d}",
                "split": split,
                "module_count": module_count,
                "context_count": 8,
                "query_count": query_count,
                "candidate_count_mean": float(
                    arrays["candidate_mask"][row, :query_count].sum(axis=1).mean()
                ),
                "case_weight": float(arrays["case_weight"][row]),
                "capture_profile_id": f"NCP-{family:03d}",
                "upstream_profile_path": str(profile["upstream_path"]),
                "upstream_profile_sha256": str(profile["upstream_sha256"]),
                "fixture_binary_set_sha256": str(profile["fixture_binary_set_sha256"]),
                "target_hard_fraction": target_hard_fraction,
                "native_context_map_json": json.dumps(
                    native_contexts.astype(int).tolist(), separators=(",", ":")
                ),
                "support_condition_map_json": json.dumps(
                    support_conditions, separators=(",", ":"), sort_keys=True
                ),
                "target_condition_map_json": json.dumps(
                    target_conditions, separators=(",", ":"), sort_keys=True
                ),
            })
            row += 1
        if (family + 1) % 10 == 0 or family + 1 == family_count:
            print(f"rendered {family + 1}/{family_count} benchmark families", flush=True)

    npz_path = RAW_DIR / "binding_worlds_full.npz"
    np.savez_compressed(npz_path, **arrays)
    manifest = pd.DataFrame(manifests)
    manifest.to_csv(RAW_DIR / "cases_full.csv", index=False)

    for name in (
        "native_capture.npz",
        "native_trace_events.jsonl.gz",
        "workflow_profiles.csv",
        "fixture_binary_manifest.csv",
        "capture_toolchain.json",
        "capture_summary.json",
    ):
        shutil.copy2(CAPTURE_DIR / name, RAW_DIR / name)
    shutil.copy2(Path(__file__), RAW_DIR / "generate_raw_data.py")
    shutil.copy2(Path(__file__).with_name("collect_native_workflows.py"), RAW_DIR / "collect_native_workflows.py")
    shutil.copy2(Path(__file__).with_name("finalize_native_capture.py"), RAW_DIR / "finalize_native_capture.py")
    shutil.copy2(Path(__file__).with_name("native_loader_worker.py"), RAW_DIR / "native_loader_worker.py")
    shutil.copy2(CONFIG_PATH, RAW_DIR / "generation_config.yaml")

    train_cases = int((manifest["split"] == "train").sum())
    test_cases = int((manifest["split"] == "test").sum())
    capture_summary = json.loads((CAPTURE_DIR / "capture_summary.json").read_text())
    summary = {
        "dataset_version": cfg["dataset_version"],
        "seed": seed,
        "cases": n,
        "families": family_count,
        "train_cases": train_cases,
        "test_cases": test_cases,
        "train_families": train_family_count,
        "test_families": family_count - train_family_count,
        "test_to_train_case_ratio": test_cases / train_cases,
        "raw_npz_bytes": npz_path.stat().st_size,
        "mean_queries": float(manifest["query_count"].mean()),
        "mean_candidates_per_query": float(manifest["candidate_count_mean"].mean()),
        "weighted_unresolved_rate": float(
            np.average(
                ((arrays["binding_target"] == p_max) * arrays["query_mask"]).sum(axis=1)
                / arrays["query_mask"].sum(axis=1),
                weights=arrays["case_weight"],
            )
        ),
        "mean_target_hard_fraction": float(manifest["target_hard_fraction"].mean()),
        "native_plugin_binaries_built": capture_summary["native_plugin_binaries_built"],
        "isolated_loader_processes": capture_summary["isolated_loader_processes"],
        "captured_native_events": capture_summary["captured_events"],
        "supervised_support_executions": train_cases * support_count,
        "approximate_supervised_binding_decisions": int(
            arrays["query_mask"][manifest["split"].eq("train").to_numpy()].sum()
        ),
    }
    (RAW_DIR / "generation_summary.json").write_text(json.dumps(summary, indent=2) + "\n")
    _hash_files()
    print(json.dumps(summary, indent=2))


if __name__ == "__main__":
    generate()
