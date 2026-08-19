/* Controlled native-loader fixture.
 * Family: SNF-014; provider: 5; profile: lld/test/ELF/lto/wrap-unreferenced-before-codegen.test
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 229; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 15050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 15051; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 15053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 15055; }
