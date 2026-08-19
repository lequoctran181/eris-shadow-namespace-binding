/* Controlled native-loader fixture.
 * Family: SNF-156; provider: 3; profile: lld/test/ELF/lto/resolution.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2499; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 157030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 157031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 157032; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 157035; }
