/* Controlled native-loader fixture.
 * Family: SNF-060; provider: 1; profile: lld/test/ELF/gc-absolute.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 961; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 61011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 61012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 61014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 61015; }
