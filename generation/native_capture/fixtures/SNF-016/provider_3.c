/* Controlled native-loader fixture.
 * Family: SNF-016; provider: 3; profile: lld/test/ELF/undef-suggest-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 259; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 17030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 17031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 17032; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 17035; }
