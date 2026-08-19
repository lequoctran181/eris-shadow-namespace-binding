/* Controlled native-loader fixture.
 * Family: SNF-131; provider: 7; profile: lld/test/ELF/wrap-extract-real.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2103; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 132070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 132071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 132072; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 132074; }
