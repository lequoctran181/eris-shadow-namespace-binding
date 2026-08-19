/* Controlled native-loader fixture.
 * Family: SNF-056; provider: 0; profile: lld/test/ELF/dso-undef-extract-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 896; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 57000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 57001; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 57003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 57004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 57005; }
