/* Controlled native-loader fixture.
 * Family: SNF-184; provider: 6; profile: lld/test/ELF/arm-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2950; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 185061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 185062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 185063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 185064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 185065; }
