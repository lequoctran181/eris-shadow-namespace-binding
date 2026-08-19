/* Controlled native-loader fixture.
 * Family: SNF-004; provider: 6; profile: lld/test/ELF/symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 70; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 5060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 5061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 5062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 5063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 5064; }
