/* Controlled native-loader fixture.
 * Family: SNF-124; provider: 6; profile: lld/test/ELF/gc-sections-no-undef-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1990; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 125060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 125061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 125062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 125063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 125064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 125065; }
