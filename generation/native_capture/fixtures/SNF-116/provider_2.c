/* Controlled native-loader fixture.
 * Family: SNF-116; provider: 2; profile: lld/test/ELF/lto/comdat2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1858; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 117021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 117022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 117023; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 117024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 117025; }
