/* Controlled native-loader fixture.
 * Family: SNF-199; provider: 6; profile: lld/test/ELF/lto/arm-rtlibcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3190; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 200060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 200061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 200062; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 200064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 200065; }
