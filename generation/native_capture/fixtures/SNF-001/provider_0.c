/* Controlled native-loader fixture.
 * Family: SNF-001; provider: 0; profile: lld/test/ELF/wrap-lazy.test
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 16; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 2001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 2002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 2003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 2004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 2005; }
