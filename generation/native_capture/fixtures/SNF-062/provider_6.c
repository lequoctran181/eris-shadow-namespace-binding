/* Controlled native-loader fixture.
 * Family: SNF-062; provider: 6; profile: lld/test/ELF/dynamic-list-weak-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 998; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 63060; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 63062; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 63065; }
