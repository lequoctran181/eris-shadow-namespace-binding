/* Controlled native-loader fixture.
 * Family: SNF-151; provider: 6; profile: lld/test/ELF/retain-symbols-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2422; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 152060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 152061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 152062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 152063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 152064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 152065; }
