/* Controlled native-loader fixture.
 * Family: SNF-087; provider: 4; profile: lld/test/ELF/arm-cmse-diagnostics.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1396; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 88040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 88041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 88042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 88043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 88044; }
