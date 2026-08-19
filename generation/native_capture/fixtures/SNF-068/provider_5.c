/* Controlled native-loader fixture.
 * Family: SNF-068; provider: 5; profile: lld/test/ELF/eh-frame-dynrel-offset.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1093; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 69050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 69051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 69052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 69054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 69055; }
