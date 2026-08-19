/* Controlled native-loader fixture.
 * Family: SNF-080; provider: 4; profile: lld/test/ELF/lto/version-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1284; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 81040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 81041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 81042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 81043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 81044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 81045; }
