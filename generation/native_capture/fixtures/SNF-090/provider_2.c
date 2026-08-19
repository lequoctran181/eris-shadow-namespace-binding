/* Controlled native-loader fixture.
 * Family: SNF-090; provider: 2; profile: lld/test/ELF/lto/wrap-script-referenced.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1442; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 91020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 91021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 91022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 91023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 91024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 91025; }
