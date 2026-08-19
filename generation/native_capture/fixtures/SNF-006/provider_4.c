/* Controlled native-loader fixture.
 * Family: SNF-006; provider: 4; profile: lld/test/ELF/export-dynamic-symbol.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 100; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 7040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 7041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 7042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 7043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 7044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 7045; }
