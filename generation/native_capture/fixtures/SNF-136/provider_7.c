/* Controlled native-loader fixture.
 * Family: SNF-136; provider: 7; profile: lld/test/ELF/lto/exclude-libs-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2183; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 137071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 137072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 137073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 137074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 137075; }
