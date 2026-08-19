/* Controlled native-loader fixture.
 * Family: SNF-193; provider: 4; profile: lld/test/ELF/gc-sections-protected.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3092; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 194040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 194041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 194043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 194044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 194045; }
