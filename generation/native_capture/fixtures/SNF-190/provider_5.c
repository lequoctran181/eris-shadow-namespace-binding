/* Controlled native-loader fixture.
 * Family: SNF-190; provider: 5; profile: lld/test/ELF/linkerscript/synthetic-symbols3.test
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3045; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 191051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 191052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 191053; }
