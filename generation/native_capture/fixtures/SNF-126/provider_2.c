/* Controlled native-loader fixture.
 * Family: SNF-126; provider: 2; profile: lld/test/ELF/gdb-index-gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2018; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 127020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 127021; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 127023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 127024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 127025; }
