from __future__ import annotations

import ctypes
import os
from pathlib import Path


root = Path(__file__).resolve().parent
handle = ctypes.CDLL(str(root / "dependency1.dylib"), mode=os.RTLD_NOW | os.RTLD_LOCAL)
symbol = handle.smoke_dep_symbol
symbol.restype = ctypes.c_int
print(symbol())
