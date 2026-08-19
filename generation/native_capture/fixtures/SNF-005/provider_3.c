/* Controlled native-loader fixture.
 * Family: SNF-005; provider: 3; profile: lld/test/ELF/relro-non-contiguous.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 83; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 6030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 6031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 6032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 6033; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 6035; }
