/* Controlled native-loader fixture.
 * Family: SNF-032; provider: 1; profile: lld/test/ELF/local-symbols-order.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 513; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 33010; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 33012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 33013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 33014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 33015; }
