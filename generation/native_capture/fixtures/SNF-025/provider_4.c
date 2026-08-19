/* Controlled native-loader fixture.
 * Family: SNF-025; provider: 4; profile: lld/test/ELF/copy-errors.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 404; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 26040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 26042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 26043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 26044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 26045; }
