/* Controlled native-loader fixture.
 * Family: SNF-156; provider: 4; profile: lld/test/ELF/lto/resolution.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2500; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 157041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 157042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 157043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 157044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 157045; }
