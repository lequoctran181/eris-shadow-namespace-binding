from __future__ import annotations

import ctypes
import json
import os
import sys


def lookup(handle: ctypes.CDLL, symbol: str) -> int | None:
    try:
        fn = getattr(handle, symbol)
    except AttributeError:
        return None
    fn.restype = ctypes.c_int
    return int(fn())


def main() -> None:
    first, second, mode = sys.argv[1:]
    flags = os.RTLD_NOW | (os.RTLD_GLOBAL if mode == "global" else os.RTLD_LOCAL)
    h1 = ctypes.CDLL(first, mode=flags)
    h2 = ctypes.CDLL(second, mode=flags)
    root = ctypes.CDLL(None)
    print(json.dumps({
        "root_alpha": lookup(root, "shadow_alpha"),
        "root_weak": lookup(root, "shadow_weak"),
        "root_hidden": lookup(root, "shadow_hidden"),
        "first_alpha": lookup(h1, "shadow_alpha"),
        "second_alpha": lookup(h2, "shadow_alpha"),
    }, sort_keys=True))


if __name__ == "__main__":
    main()
