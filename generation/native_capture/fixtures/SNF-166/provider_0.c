/* Controlled native-loader fixture.
 * Family: SNF-166; provider: 0; profile: lld/test/ELF/loongarch-pc-hi20-lo12-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2656; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 167000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 167001; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 167003; }
