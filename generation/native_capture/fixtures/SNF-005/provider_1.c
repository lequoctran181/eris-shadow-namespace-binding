/* Controlled native-loader fixture.
 * Family: SNF-005; provider: 1; profile: lld/test/ELF/relro-non-contiguous.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 81; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 6010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 6011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 6012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 6013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 6014; }
