/* Controlled native-loader fixture.
 * Family: SNF-136; provider: 2; profile: lld/test/ELF/lto/exclude-libs-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2178; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 137020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 137021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 137022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 137023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 137024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 137025; }
