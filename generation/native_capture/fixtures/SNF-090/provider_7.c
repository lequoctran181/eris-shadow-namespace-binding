/* Controlled native-loader fixture.
 * Family: SNF-090; provider: 7; profile: lld/test/ELF/lto/wrap-script-referenced.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1447; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 91071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 91072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 91073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 91074; }
