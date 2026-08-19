/* Controlled native-loader fixture.
 * Family: SNF-198; provider: 4; profile: lld/test/ELF/lto/thinlto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3172; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 199040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 199041; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 199043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 199044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 199045; }
