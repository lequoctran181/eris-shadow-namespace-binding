/* Controlled native-loader fixture.
 * Family: SNF-005; provider: 5; profile: lld/test/ELF/relro-non-contiguous.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 85; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 6050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 6051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 6052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 6053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 6054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 6055; }
