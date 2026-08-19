/* Controlled native-loader fixture.
 * Family: SNF-093; provider: 4; profile: lld/test/ELF/lto/comdat-nodeduplicate.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1492; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 94040; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 94042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 94043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 94044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 94045; }
