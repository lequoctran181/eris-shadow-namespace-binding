/* Controlled native-loader fixture.
 * Family: SNF-068; provider: 4; profile: lld/test/ELF/eh-frame-dynrel-offset.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1092; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 69040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 69041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 69042; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 69044; }
