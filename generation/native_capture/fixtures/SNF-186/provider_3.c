/* Controlled native-loader fixture.
 * Family: SNF-186; provider: 3; profile: lld/test/ELF/lto/duplicated-name.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2979; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 187030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 187031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 187032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 187033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 187035; }
