/* Controlled native-loader fixture.
 * Family: SNF-180; provider: 3; profile: lld/test/ELF/lto/libcall-archive-bitcode.test
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2883; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 181031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 181032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 181033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 181034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 181035; }
