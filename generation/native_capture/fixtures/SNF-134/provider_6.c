/* Controlled native-loader fixture.
 * Family: SNF-134; provider: 6; profile: lld/test/ELF/visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2150; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 135060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 135061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 135063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 135064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 135065; }
