#!/usr/bin/env python3
"""Execute one isolated macOS plugin-load plan and report observed lookups."""

from __future__ import annotations

import argparse
import ctypes
import json
import os
from pathlib import Path
import time


SYMBOL_COUNT = 6


class DlInfo(ctypes.Structure):
    _fields_ = [
        ("dli_fname", ctypes.c_char_p),
        ("dli_fbase", ctypes.c_void_p),
        ("dli_sname", ctypes.c_char_p),
        ("dli_saddr", ctypes.c_void_p),
    ]


def _dladdr_name(pointer: int) -> str | None:
    libsystem = ctypes.CDLL("/usr/lib/libSystem.B.dylib")
    dladdr = libsystem.dladdr
    dladdr.argtypes = [ctypes.c_void_p, ctypes.POINTER(DlInfo)]
    dladdr.restype = ctypes.c_int
    info = DlInfo()
    if dladdr(ctypes.c_void_p(pointer), ctypes.byref(info)) == 0 or not info.dli_fname:
        return None
    return Path(info.dli_fname.decode("utf-8", errors="replace")).name


def _lookup(handle: ctypes.CDLL, handle_name: str, symbol_index: int) -> dict[str, object]:
    symbol = f"snb_symbol_{symbol_index}"
    started = time.perf_counter_ns()
    try:
        function = getattr(handle, symbol)
        function.argtypes = []
        function.restype = ctypes.c_int
        pointer = int(ctypes.cast(function, ctypes.c_void_p).value or 0)
        return_code = int(function())
        provider_file = _dladdr_name(pointer)
        status = "resolved"
        error = None
    except (AttributeError, OSError):
        return_code = -1
        provider_file = None
        status = "unresolved"
        error = "symbol_not_found"
    elapsed = max(1, time.perf_counter_ns() - started)
    return {
        "event": "lookup",
        "handle": handle_name,
        "symbol_index": symbol_index,
        "status": status,
        "return_code": return_code,
        "provider_file": provider_file,
        "elapsed_ns": elapsed,
        "error": error,
    }


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--fixture-dir", type=Path, required=True)
    parser.add_argument("--order", required=True, help="Comma-separated provider indices")
    parser.add_argument("--global-mask", required=True, help="Comma-separated 0/1 flags")
    parser.add_argument("--lazy-mask", required=True, help="Comma-separated 0/1 flags")
    args = parser.parse_args()

    order = [int(value) for value in args.order.split(",") if value]
    global_mask = [int(value) for value in args.global_mask.split(",") if value]
    lazy_mask = [int(value) for value in args.lazy_mask.split(",") if value]
    if not (len(order) == len(global_mask) == len(lazy_mask)):
        raise ValueError("order, global-mask, and lazy-mask must have equal lengths")

    handles: dict[int, ctypes.CDLL] = {}
    events: list[dict[str, object]] = []
    for load_rank, (provider, is_global, is_lazy) in enumerate(
        zip(order, global_mask, lazy_mask, strict=True)
    ):
        path = (args.fixture_dir / f"provider_{provider}.dylib").resolve()
        flags = (os.RTLD_LAZY if is_lazy else os.RTLD_NOW) | (
            os.RTLD_GLOBAL if is_global else os.RTLD_LOCAL
        )
        started = time.perf_counter_ns()
        try:
            handles[provider] = ctypes.CDLL(str(path), mode=flags)
            status = "loaded"
            error = None
        except OSError:
            status = "load_error"
            error = "dlopen_failed"
        elapsed = max(1, time.perf_counter_ns() - started)
        events.append({
            "event": "load",
            "load_rank": load_rank,
            "provider": provider,
            "scope": "global" if is_global else "local",
            "binding": "lazy" if is_lazy else "now",
            "status": status,
            "elapsed_ns": elapsed,
            "error": error,
        })

    root = ctypes.CDLL(None)
    root_lookups = [_lookup(root, "root", symbol) for symbol in range(SYMBOL_COUNT)]
    direct_lookups: list[dict[str, object]] = []
    for provider in order:
        handle = handles.get(provider)
        if handle is None:
            continue
        direct_lookups.extend(
            _lookup(handle, f"provider_{provider}", symbol)
            for symbol in range(SYMBOL_COUNT)
        )
    print(json.dumps({
        "order": order,
        "global_mask": global_mask,
        "lazy_mask": lazy_mask,
        "load_events": events,
        "root_lookups": root_lookups,
        "direct_lookups": direct_lookups,
    }, ensure_ascii=True, separators=(",", ":"), sort_keys=True))


if __name__ == "__main__":
    main()
