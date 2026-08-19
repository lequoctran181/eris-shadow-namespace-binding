/* Controlled native-loader fixture.
 * Family: SNF-028; provider: 4; profile: lld/test/ELF/verdef-defaultver.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 452; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 29040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 29041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 29042; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 29044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 29045; }
