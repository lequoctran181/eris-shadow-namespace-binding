/* Controlled native-loader fixture.
 * Family: SNF-118; provider: 7; profile: lld/test/ELF/weak-undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1895; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 119072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 119073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 119074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 119075; }
