/* Controlled native-loader fixture.
 * Family: SNF-031; provider: 0; profile: lld/test/ELF/riscv-tlsdesc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 496; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 32000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 32001; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 32003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 32004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 32005; }
