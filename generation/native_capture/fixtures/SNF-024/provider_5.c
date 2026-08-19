/* Controlled native-loader fixture.
 * Family: SNF-024; provider: 5; profile: lld/test/ELF/resolution.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 389; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 25052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 25053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 25054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 25055; }
