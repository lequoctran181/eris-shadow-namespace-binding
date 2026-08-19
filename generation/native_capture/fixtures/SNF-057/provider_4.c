/* Controlled native-loader fixture.
 * Family: SNF-057; provider: 4; profile: lld/test/ELF/as-needed-in-regular.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 916; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 58041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 58042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 58043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 58044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 58045; }
