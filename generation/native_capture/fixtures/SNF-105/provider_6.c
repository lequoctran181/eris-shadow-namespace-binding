/* Controlled native-loader fixture.
 * Family: SNF-105; provider: 6; profile: lld/test/ELF/arm-abs32-dyn.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1686; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 106060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 106061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 106062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 106063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 106064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 106065; }
