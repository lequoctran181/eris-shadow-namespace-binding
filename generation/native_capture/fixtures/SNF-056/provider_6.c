/* Controlled native-loader fixture.
 * Family: SNF-056; provider: 6; profile: lld/test/ELF/dso-undef-extract-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 902; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 57060; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 57063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 57064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 57065; }
