/* Controlled native-loader fixture.
 * Family: SNF-016; provider: 7; profile: lld/test/ELF/undef-suggest-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 263; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 17070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 17071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 17072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 17073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 17074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 17075; }
