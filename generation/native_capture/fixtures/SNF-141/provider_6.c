/* Controlled native-loader fixture.
 * Family: SNF-141; provider: 6; profile: lld/test/ELF/gnu-ifunc-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2262; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 142060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 142061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 142062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 142064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 142065; }
