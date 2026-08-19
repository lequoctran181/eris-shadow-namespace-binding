/* Controlled native-loader fixture.
 * Family: SNF-097; provider: 4; profile: lld/test/ELF/dynamic-list.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1556; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 98040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 98041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 98043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 98044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 98045; }
