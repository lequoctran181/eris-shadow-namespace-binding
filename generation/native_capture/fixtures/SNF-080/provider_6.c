/* Controlled native-loader fixture.
 * Family: SNF-080; provider: 6; profile: lld/test/ELF/lto/version-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1286; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 81060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 81061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 81062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 81063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 81064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 81065; }
