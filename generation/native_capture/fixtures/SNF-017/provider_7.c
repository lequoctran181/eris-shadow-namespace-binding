/* Controlled native-loader fixture.
 * Family: SNF-017; provider: 7; profile: lld/test/ELF/verneed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 279; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 18071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 18072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 18073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 18074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 18075; }
