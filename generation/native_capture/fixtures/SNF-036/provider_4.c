/* Controlled native-loader fixture.
 * Family: SNF-036; provider: 4; profile: lld/test/ELF/as-needed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 580; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 37041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 37042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 37043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 37044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 37045; }
