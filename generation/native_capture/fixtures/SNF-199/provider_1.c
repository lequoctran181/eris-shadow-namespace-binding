/* Controlled native-loader fixture.
 * Family: SNF-199; provider: 1; profile: lld/test/ELF/lto/arm-rtlibcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3185; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 200010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 200011; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 200014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 200015; }
