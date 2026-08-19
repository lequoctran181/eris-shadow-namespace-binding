/* Controlled native-loader fixture.
 * Family: SNF-199; provider: 4; profile: lld/test/ELF/lto/arm-rtlibcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3188; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 200040; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 200043; }
