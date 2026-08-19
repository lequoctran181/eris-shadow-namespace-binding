/* Controlled native-loader fixture.
 * Family: SNF-156; provider: 7; profile: lld/test/ELF/lto/resolution.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2503; }
extern int snb_anchor_4(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 157070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 157071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 157072; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 157074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 157075; }
