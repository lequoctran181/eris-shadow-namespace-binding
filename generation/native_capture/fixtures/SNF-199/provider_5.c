/* Controlled native-loader fixture.
 * Family: SNF-199; provider: 5; profile: lld/test/ELF/lto/arm-rtlibcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3189; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 200050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 200051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 200052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 200053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 200054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 200055; }
