/* Controlled native-loader fixture.
 * Family: SNF-187; provider: 6; profile: lld/test/ELF/ppc32-local-branch.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2998; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 188060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 188061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 188062; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 188064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 188065; }
