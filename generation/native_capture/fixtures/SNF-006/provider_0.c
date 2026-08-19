/* Controlled native-loader fixture.
 * Family: SNF-006; provider: 0; profile: lld/test/ELF/export-dynamic-symbol.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 96; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 7001; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 7003; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 7005; }
