/* Controlled native-loader fixture.
 * Family: SNF-009; provider: 4; profile: lld/test/ELF/arm-thunk-edgecase.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 148; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 10040; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 10042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 10043; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 10045; }
