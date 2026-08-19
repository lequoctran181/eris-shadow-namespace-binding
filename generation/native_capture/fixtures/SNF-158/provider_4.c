/* Controlled native-loader fixture.
 * Family: SNF-158; provider: 4; profile: lld/test/ELF/weak-shared-gc.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2532; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 159040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 159041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 159042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 159043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 159044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 159045; }
