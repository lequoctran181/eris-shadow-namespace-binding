/* Controlled native-loader fixture.
 * Family: SNF-009; provider: 3; profile: lld/test/ELF/arm-thunk-edgecase.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 147; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 10030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 10031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 10033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 10034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 10035; }
