/* Controlled native-loader fixture.
 * Family: SNF-117; provider: 4; profile: lld/test/ELF/lto/common2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1876; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 118041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 118042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 118043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 118044; }
