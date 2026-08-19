/* Controlled native-loader fixture.
 * Family: SNF-159; provider: 6; profile: lld/test/ELF/systemz-gotent-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2550; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 160060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 160061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 160063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 160064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 160065; }
