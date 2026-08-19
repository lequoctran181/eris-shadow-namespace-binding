#!/usr/bin/env python3
"""CPU-only from-scratch reference for Shadow Namespace Binding Ledger."""

from __future__ import annotations

import json
import os
import random
import sys
from pathlib import Path

os.environ.setdefault("OMP_NUM_THREADS", "10")
os.environ.setdefault("MKL_NUM_THREADS", "10")

import numpy as np
import pandas as pd
import torch
from torch import nn


SEED = 20260805
P_MAX = 8
M_MAX = 20


def masked_stats(values: np.ndarray, mask: np.ndarray, axis: tuple[int, ...]) -> np.ndarray:
    expanded = mask.astype(np.float32)
    while expanded.ndim < values.ndim:
        expanded = expanded[..., None]
    count = np.maximum(expanded.sum(axis=axis), 1.0)
    mean = (values * expanded).sum(axis=axis) / count
    centered = (values - np.expand_dims(mean, axis=axis[0])) if len(axis) == 1 else values
    if len(axis) == 1:
        variance = ((centered * centered) * expanded).sum(axis=axis) / count
    else:
        mean_expand = mean
        for current_axis in sorted(axis):
            mean_expand = np.expand_dims(mean_expand, axis=current_axis)
        variance = (((values - mean_expand) ** 2) * expanded).sum(axis=axis) / count
    return np.concatenate([mean, np.sqrt(np.maximum(variance, 0.0))], axis=-1)


def build_global_features(data: dict[str, np.ndarray]) -> np.ndarray:
    modules = data["module_features"].astype(np.float32) / 31.0
    contexts = data["context_features"].astype(np.float32) / 31.0
    support_q = data["support_query_features"].astype(np.float32) / 31.0
    support_c = data["support_candidate_features"].astype(np.float32) / 31.0
    support_mask = data["support_candidate_mask"].astype(np.float32)
    choices = data["support_choice"].astype(np.int64)
    trace = data["probe_trace"].astype(np.float32)

    module_stats = masked_stats(modules, data["module_mask"], axis=(1,))
    context_stats = masked_stats(contexts, data["context_mask"], axis=(1,))
    support_q_stats = np.concatenate([support_q.mean(axis=1), support_q.std(axis=1)], axis=1)

    chosen = np.zeros((len(choices), choices.shape[1], support_c.shape[-1]), dtype=np.float32)
    resolved = choices < P_MAX
    rows, probes = np.nonzero(resolved)
    chosen[rows, probes] = support_c[rows, probes, choices[rows, probes]]
    chosen_stats = np.concatenate([chosen.mean(axis=1), chosen.std(axis=1)], axis=1)
    all_count = np.maximum(support_mask.sum(axis=(1, 2))[:, None], 1.0)
    all_mean = (support_c * support_mask[..., None]).sum(axis=(1, 2)) / all_count
    all_var = (((support_c - all_mean[:, None, None, :]) ** 2) * support_mask[..., None]).sum(axis=(1, 2)) / all_count
    all_stats = np.concatenate([all_mean, np.sqrt(np.maximum(all_var, 0.0))], axis=1)

    choice_hist = np.stack([(choices == slot).mean(axis=1) for slot in range(P_MAX + 1)], axis=1)
    trace_mean = trace.mean(axis=(1, 2))
    trace_std = trace.std(axis=(1, 2))
    trace_max = trace.max(axis=(1, 2))
    trace_min = trace.min(axis=(1, 2))
    trace_energy = np.mean(trace * trace, axis=(1, 2))
    peak = np.argmax(np.abs(trace), axis=2).astype(np.float32) / trace.shape[2]
    peak_stats = np.concatenate([peak.mean(axis=1), peak.std(axis=1)], axis=1)
    return np.concatenate(
        [
            module_stats,
            context_stats,
            support_q_stats,
            chosen_stats,
            all_stats,
            choice_hist,
            trace_mean,
            trace_std,
            trace_max,
            trace_min,
            trace_energy,
            peak_stats,
        ],
        axis=1,
    ).astype(np.float32)


def build_support_items(data: dict[str, np.ndarray]) -> np.ndarray:
    support_q = data["support_query_features"].astype(np.float32) / 31.0
    support_c = data["support_candidate_features"].astype(np.float32) / 31.0
    support_mask = data["support_candidate_mask"].astype(np.float32)
    choices = data["support_choice"].astype(np.int64)
    trace = data["probe_trace"].astype(np.float32)
    n, support_n, _, width = support_c.shape
    chosen = np.zeros((n, support_n, width), dtype=np.float32)
    resolved = choices < P_MAX
    rows, probes = np.nonzero(resolved)
    chosen[rows, probes] = support_c[rows, probes, choices[rows, probes]]
    count = np.maximum(support_mask.sum(axis=2, keepdims=True), 1.0)
    candidate_mean = (support_c * support_mask[..., None]).sum(axis=2) / count
    one_hot = np.eye(P_MAX + 1, dtype=np.float32)[choices]
    trace_mean = trace.mean(axis=2)
    trace_std = trace.std(axis=2)
    trace_max = trace.max(axis=2)
    trace_min = trace.min(axis=2)
    trace_energy = np.mean(trace * trace, axis=2)
    trace_peak = np.argmax(np.abs(trace), axis=2).astype(np.float32) / trace.shape[2]
    trace_bins = np.abs(trace).reshape(n, support_n, 32, 8, trace.shape[3]).mean(axis=3)
    return np.concatenate(
        [
            support_q,
            chosen,
            candidate_mean,
            chosen - candidate_mean,
            one_hot,
            trace_mean,
            trace_std,
            trace_max,
            trace_min,
            trace_energy,
            trace_peak,
            trace_bins.reshape(n, support_n, -1),
        ],
        axis=2,
    ).astype(np.float32)


def load_partition(path: Path, training: bool) -> dict[str, np.ndarray]:
    wanted = [
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
    ]
    if training:
        wanted += [
            "binding_target",
            "scope_target",
            "deferred_target",
            "program_target",
            "case_weight",
        ]
    with np.load(path, allow_pickle=False) as archive:
        data = {name: archive[name] for name in wanted}
    data["global_features"] = build_global_features(data)
    data["support_items"] = build_support_items(data)
    data["program_trace"] = data["probe_trace"].mean(axis=1).astype(np.float32)
    del data["probe_trace"]
    del data["support_query_features"]
    del data["support_candidate_features"]
    del data["support_candidate_mask"]
    del data["support_choice"]
    return data


class LedgerNet(nn.Module):
    def __init__(self, global_width: int, support_width: int) -> None:
        super().__init__()
        self.global_encoder = nn.Sequential(
            nn.Linear(global_width, 128), nn.GELU(), nn.LayerNorm(128), nn.Linear(128, 64), nn.GELU()
        )
        self.query_encoder = nn.Sequential(nn.Linear(14, 48), nn.GELU(), nn.Linear(48, 32))
        self.support_encoder = nn.Sequential(
            nn.Linear(support_width, 128), nn.GELU(), nn.Linear(128, 64), nn.LayerNorm(64)
        )
        self.support_key = nn.Linear(64, 32)
        self.trace_encoder = nn.Sequential(
            nn.Conv1d(8, 24, kernel_size=5, stride=2, padding=2),
            nn.GELU(),
            nn.Conv1d(24, 32, kernel_size=5, stride=2, padding=2),
            nn.GELU(),
            nn.Conv1d(32, 48, kernel_size=3, stride=2, padding=1),
            nn.GELU(),
            nn.Flatten(),
            nn.Linear(48 * 32, 128),
            nn.GELU(),
        )
        self.program_head = nn.Sequential(
            nn.Linear(256, 160), nn.GELU(), nn.Linear(160, 49)
        )
        self.program_context = nn.Sequential(nn.Linear(49, 64), nn.GELU())
        self.candidate_encoder = nn.Sequential(nn.Linear(14, 48), nn.GELU(), nn.Linear(48, 32))
        self.module_encoder = nn.Sequential(nn.Linear(14, 32), nn.GELU(), nn.Linear(32, 20))
        self.context_encoder = nn.Sequential(nn.Linear(12, 28), nn.GELU(), nn.Linear(28, 16))
        self.unresolved = nn.Parameter(torch.zeros(32))
        pair_width = 64 + 64 + 64 + 49 + 32 + 32 + 20 + 20 + 16 + 7
        self.binding_head = nn.Sequential(
            nn.Linear(pair_width, 128), nn.GELU(), nn.Dropout(0.08), nn.Linear(128, 48), nn.GELU(), nn.Linear(48, 1)
        )
        self.defer_head = nn.Sequential(
            nn.Linear(64 + 32 + 16, 64), nn.GELU(), nn.Linear(64, 1)
        )
        self.scope_head = nn.Sequential(
            nn.Linear(64 + 20 + 2, 64), nn.GELU(), nn.Linear(64, 1)
        )

    def forward(
        self,
        global_features: torch.Tensor,
        support_items: torch.Tensor,
        program_trace: torch.Tensor,
        modules_raw: torch.Tensor,
        contexts_raw: torch.Tensor,
        queries_raw: torch.Tensor,
        candidates_raw: torch.Tensor,
        candidate_mask: torch.Tensor,
        program_override: torch.Tensor | None = None,
    ) -> tuple[torch.Tensor, torch.Tensor, torch.Tensor, torch.Tensor]:
        b, q, p, _ = candidates_raw.shape
        global_encoded = self.global_encoder(global_features)
        modules = modules_raw / 31.0
        contexts = contexts_raw / 31.0
        queries = queries_raw / 31.0
        candidates = candidates_raw / 31.0
        query_encoded = self.query_encoder(queries)
        support_encoded = self.support_encoder(support_items)
        support_keys = self.support_key(support_encoded)
        attention_logits = torch.einsum(
            "bqd,bsd->bqs", query_encoded, support_keys
        ) / np.sqrt(32.0)
        support_query_raw = torch.round(support_items[..., :14] * 31.0)
        condition_columns = (1, 2, 3, 4, 5, 7)
        condition_match = torch.stack(
            [
                queries_raw[..., column, None]
                == support_query_raw[:, None, :, column]
                for column in condition_columns
            ],
            dim=-1,
        ).float().sum(dim=-1)
        attention = torch.softmax(attention_logits + 1.35 * condition_match, dim=-1)
        support_context = torch.einsum("bqs,bsd->bqd", attention, support_encoded)
        trace_encoded = self.trace_encoder(program_trace.transpose(1, 2))
        program_pred = self.program_head(
            torch.cat(
                [global_encoded, support_encoded.mean(dim=1), trace_encoded], dim=-1
            )
        )
        program_for_binding = program_pred if program_override is None else program_override
        program_context = self.program_context(program_for_binding)
        candidate_encoded = self.candidate_encoder(candidates)
        module_encoded = self.module_encoder(modules)
        context_encoded = self.context_encoder(contexts)

        requester_idx = queries_raw[..., 0].long().clamp(0, modules.shape[1] - 1)
        context_idx = queries_raw[..., 1].long().clamp(0, contexts.shape[1] - 1)
        requester = torch.gather(
            module_encoded, 1, requester_idx[..., None].expand(-1, -1, module_encoded.shape[-1])
        )
        query_context = torch.gather(
            context_encoded, 1, context_idx[..., None].expand(-1, -1, context_encoded.shape[-1])
        )
        provider_idx = candidates_raw[..., 0].long().clamp(0, modules.shape[1] - 1)
        provider = torch.gather(
            module_encoded[:, None].expand(-1, q, -1, -1),
            2,
            provider_idx[..., None].expand(-1, -1, -1, module_encoded.shape[-1]),
        )

        unresolved_encoded = self.unresolved.view(1, 1, 1, -1).expand(b, q, 1, -1)
        candidate_encoded = torch.cat([candidate_encoded, unresolved_encoded], dim=2)
        zero_provider = torch.zeros((b, q, 1, provider.shape[-1]), device=provider.device)
        provider = torch.cat([provider, zero_provider], dim=2)
        valid = torch.cat(
            [candidate_mask.bool(), torch.ones((b, q, 1), dtype=torch.bool, device=candidate_mask.device)], dim=2
        )

        q_expand = query_encoded[:, :, None].expand(-1, -1, p + 1, -1)
        requester_expand = requester[:, :, None].expand(-1, -1, p + 1, -1)
        context_expand = query_context[:, :, None].expand(-1, -1, p + 1, -1)
        global_expand = global_encoded[:, None, None].expand(-1, q, p + 1, -1)
        support_expand = support_context[:, :, None].expand(-1, -1, p + 1, -1)
        program_expand = program_context[:, None, None].expand(-1, q, p + 1, -1)
        program_raw_expand = program_for_binding[:, None, None].expand(-1, q, p + 1, -1)
        candidate_pad = torch.cat(
            [candidates_raw, torch.zeros((b, q, 1, candidates_raw.shape[-1]), device=candidates_raw.device)], dim=2
        )
        provider_pad_idx = torch.cat(
            [provider_idx, torch.full((b, q, 1), -1, device=provider_idx.device)], dim=2
        )
        equalities = torch.stack(
            [
                candidate_pad[..., 1] == queries_raw[..., 2, None],
                candidate_pad[..., 2] == queries_raw[..., 3, None],
                candidate_pad[..., 5] == queries_raw[..., 4, None],
                candidate_pad[..., 6] == queries_raw[..., 5, None],
                provider_pad_idx == queries_raw[..., 8, None],
                candidate_pad[..., 8] > 0,
                candidate_pad[..., 10] > 0,
            ],
            dim=-1,
        ).float()
        binding_input = torch.cat(
            [
                global_expand,
                support_expand,
                program_expand,
                program_raw_expand,
                q_expand,
                candidate_encoded,
                requester_expand,
                provider,
                context_expand,
                equalities,
            ],
            dim=-1,
        )
        binding_logits = self.binding_head(binding_input).squeeze(-1).masked_fill(~valid, -1e9)

        defer_input = torch.cat(
            [global_encoded[:, None].expand(-1, q, -1), query_encoded, query_context], dim=-1
        )
        defer_logits = self.defer_head(defer_input).squeeze(-1)

        probabilities = torch.softmax(binding_logits, dim=-1)[..., :p]
        module_counts = torch.zeros((b, modules.shape[1]), device=modules.device)
        module_counts.scatter_add_(1, provider_idx.reshape(b, -1), probabilities.reshape(b, -1))
        requester_ns = torch.gather(modules_raw[..., 1], 1, requester_idx)
        provider_ns = torch.gather(
            modules_raw[:, None, :, 1].expand(-1, q, -1), 2, provider_idx
        )
        cross_probability = probabilities * (provider_ns != requester_ns[..., None]).float()
        cross_counts = torch.zeros_like(module_counts)
        cross_counts.scatter_add_(1, provider_idx.reshape(b, -1), cross_probability.reshape(b, -1))
        scope_input = torch.cat(
            [
                global_encoded[:, None].expand(-1, modules.shape[1], -1),
                module_encoded,
                (module_counts / 8.0)[..., None],
                (cross_counts / 4.0)[..., None],
            ],
            dim=-1,
        )
        scope_logits = self.scope_head(scope_input).squeeze(-1)
        return binding_logits, defer_logits, scope_logits, program_pred


def batch_to_torch(data: dict[str, np.ndarray], indices: np.ndarray, device: torch.device) -> dict[str, torch.Tensor]:
    names = [
        "global_features",
        "support_items",
        "program_trace",
        "module_features",
        "module_mask",
        "context_features",
        "query_features",
        "query_mask",
        "candidate_features",
        "candidate_mask",
    ]
    if "binding_target" in data:
        names += [
            "binding_target",
            "scope_target",
            "deferred_target",
            "program_target",
            "case_weight",
        ]
    return {name: torch.from_numpy(data[name][indices]).to(device) for name in names}


def train_model(train: dict[str, np.ndarray], device: torch.device) -> LedgerNet:
    model = LedgerNet(
        train["global_features"].shape[1], train["support_items"].shape[2]
    ).to(device)
    optimizer = torch.optim.AdamW(model.parameters(), lr=2.2e-3, weight_decay=2e-4)
    rng = np.random.default_rng(SEED + 44)
    model.train()
    for epoch in range(int(os.environ.get("SNB_EPOCHS", "20"))):
        order = rng.permutation(len(train["query_features"]))
        for start in range(0, len(order), 48):
            batch = batch_to_torch(train, order[start : start + 48], device)
            noisy_program = batch["program_target"].float() / 12.0
            noisy_program = noisy_program + 0.14 * torch.randn_like(noisy_program)
            binding, deferred, scope, program = model(
                batch["global_features"],
                batch["support_items"],
                batch["program_trace"],
                batch["module_features"].float(),
                batch["context_features"].float(),
                batch["query_features"].float(),
                batch["candidate_features"].float(),
                batch["candidate_mask"],
                noisy_program,
            )
            q_mask = batch["query_mask"].bool()
            m_mask = batch["module_mask"].bool()
            ce = nn.functional.cross_entropy(binding[q_mask], batch["binding_target"].long()[q_mask])
            defer_loss = nn.functional.binary_cross_entropy_with_logits(
                deferred[q_mask], batch["deferred_target"].float()[q_mask]
            )
            scope_loss = nn.functional.binary_cross_entropy_with_logits(
                scope[m_mask], batch["scope_target"].float()[m_mask]
            )
            program_loss = nn.functional.smooth_l1_loss(
                program, batch["program_target"].float() / 12.0
            )
            loss = ce + 0.28 * defer_loss + 0.24 * scope_loss + 0.85 * program_loss
            optimizer.zero_grad(set_to_none=True)
            loss.backward()
            nn.utils.clip_grad_norm_(model.parameters(), 2.0)
            optimizer.step()
    return model


def infer(model: LedgerNet, test: dict[str, np.ndarray], device: torch.device) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    choices = np.zeros((len(test["query_features"]), test["query_features"].shape[1]), dtype=np.int16)
    deferred = np.zeros_like(choices, dtype=np.uint8)
    scopes = np.zeros((len(choices), M_MAX), dtype=np.uint8)
    model.eval()
    with torch.no_grad():
        for start in range(0, len(choices), 64):
            idx = np.arange(start, min(start + 64, len(choices)))
            batch = batch_to_torch(test, idx, device)
            bind_logits, defer_logits, scope_logits, _ = model(
                batch["global_features"],
                batch["support_items"],
                batch["program_trace"],
                batch["module_features"].float(),
                batch["context_features"].float(),
                batch["query_features"].float(),
                batch["candidate_features"].float(),
                batch["candidate_mask"],
            )
            choices[idx] = bind_logits.argmax(dim=-1).cpu().numpy()
            deferred[idx] = (torch.sigmoid(defer_logits) >= 0.50).cpu().numpy()
            scopes[idx] = (torch.sigmoid(scope_logits) >= 0.48).cpu().numpy()
    return choices, scopes, deferred


def write_submission(
    manifest: pd.DataFrame,
    choices: np.ndarray,
    scopes: np.ndarray,
    deferred: np.ndarray,
    output_path: Path,
) -> None:
    rows = []
    for row, case in manifest.iterrows():
        q_count = int(case["query_count"])
        m_count = int(case["module_count"])
        obj = {
            "bindings": [
                f"Q{q:02d}=" + ("U" if int(choices[row, q]) == P_MAX else f"C{int(choices[row, q]):02d}")
                for q in range(q_count)
            ],
            "scope_roots": [f"M{m:02d}" for m in range(m_count) if scopes[row, m]],
            "deferred": [f"Q{q:02d}" for q in range(q_count) if deferred[row, q]],
        }
        rows.append({
            "case_id": str(case["case_id"]),
            "ledger_json": json.dumps(obj, ensure_ascii=True, separators=(",", ":"), sort_keys=True),
        })
    output_path.parent.mkdir(parents=True, exist_ok=True)
    pd.DataFrame(rows).to_csv(output_path, index=False)


def main() -> None:
    if len(sys.argv) != 3:
        raise SystemExit("Usage: python3 solution.py <public_dir> <submission_out>")
    public_dir = Path(sys.argv[1])
    output_path = Path(sys.argv[2])
    random.seed(SEED)
    np.random.seed(SEED)
    torch.manual_seed(SEED)
    torch.set_num_threads(min(10, os.cpu_count() or 1))
    device = torch.device("cpu")
    train = load_partition(public_dir / "train.npz", training=True)
    test = load_partition(public_dir / "test.npz", training=False)
    model = train_model(train, device)
    choices, scopes, deferred = infer(model, test, device)
    manifest = pd.read_csv(public_dir / "test_cases.csv")
    write_submission(manifest, choices, scopes, deferred, output_path)


if __name__ == "__main__":
    main()
