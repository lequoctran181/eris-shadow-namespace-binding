/* Controlled native-loader fixture.
 * Family: SNF-027; provider: 6; profile: lld/test/ELF/gnu-hash-table.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 438; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 28060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 28061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 28062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 28063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 28064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 28065; }
