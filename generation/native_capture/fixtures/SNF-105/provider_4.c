/* Controlled native-loader fixture.
 * Family: SNF-105; provider: 4; profile: lld/test/ELF/arm-abs32-dyn.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1684; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 106041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 106042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 106043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 106044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 106045; }
