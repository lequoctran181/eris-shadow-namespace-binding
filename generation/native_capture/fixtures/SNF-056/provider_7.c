/* Controlled native-loader fixture.
 * Family: SNF-056; provider: 7; profile: lld/test/ELF/dso-undef-extract-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 903; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 57070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 57071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 57072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 57073; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 57075; }
