/* Controlled native-loader fixture.
 * Family: SNF-116; provider: 7; profile: lld/test/ELF/lto/comdat2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1863; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 117070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 117071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 117072; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 117074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 117075; }
