/* Controlled native-loader fixture.
 * Family: SNF-093; provider: 2; profile: lld/test/ELF/lto/comdat-nodeduplicate.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1490; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 94021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 94022; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 94024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 94025; }
