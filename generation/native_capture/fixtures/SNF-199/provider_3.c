/* Controlled native-loader fixture.
 * Family: SNF-199; provider: 3; profile: lld/test/ELF/lto/arm-rtlibcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3187; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 200030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 200031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 200032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 200033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 200034; }
