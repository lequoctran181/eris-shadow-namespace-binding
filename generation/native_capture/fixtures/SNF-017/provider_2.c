/* Controlled native-loader fixture.
 * Family: SNF-017; provider: 2; profile: lld/test/ELF/verneed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 274; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 18020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 18021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 18022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 18024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 18025; }
