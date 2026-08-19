/* Controlled native-loader fixture.
 * Family: SNF-154; provider: 4; profile: lld/test/ELF/lto/wrap-2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2468; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 155040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 155041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 155042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 155043; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 155045; }
