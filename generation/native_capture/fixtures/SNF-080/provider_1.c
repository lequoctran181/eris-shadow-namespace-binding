/* Controlled native-loader fixture.
 * Family: SNF-080; provider: 1; profile: lld/test/ELF/lto/version-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1281; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 81010; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 81012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 81013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 81014; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 81015; }
