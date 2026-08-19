/* Controlled native-loader fixture.
 * Family: SNF-119; provider: 6; profile: lld/test/ELF/arm-wraparound-veneer.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1910; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 120060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 120061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 120062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 120063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 120064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 120065; }
