/* Controlled native-loader fixture.
 * Family: SNF-117; provider: 3; profile: lld/test/ELF/lto/common2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1875; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 118030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 118031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 118032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 118033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 118034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 118035; }
