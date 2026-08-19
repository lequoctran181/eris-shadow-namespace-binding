/* Controlled native-loader fixture.
 * Family: SNF-136; provider: 5; profile: lld/test/ELF/lto/exclude-libs-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2181; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 137050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 137051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 137052; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 137055; }
