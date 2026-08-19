/* Controlled native-loader fixture.
 * Family: SNF-084; provider: 0; profile: lld/test/ELF/riscv-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1344; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 85000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 85001; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 85004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 85005; }
