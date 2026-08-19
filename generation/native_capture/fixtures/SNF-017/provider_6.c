/* Controlled native-loader fixture.
 * Family: SNF-017; provider: 6; profile: lld/test/ELF/verneed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 278; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 18061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 18062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 18063; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 18065; }
