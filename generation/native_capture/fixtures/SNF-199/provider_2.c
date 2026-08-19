/* Controlled native-loader fixture.
 * Family: SNF-199; provider: 2; profile: lld/test/ELF/lto/arm-rtlibcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3186; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 200020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 200021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 200022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 200023; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 200025; }
