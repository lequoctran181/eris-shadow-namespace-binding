/* Controlled native-loader fixture.
 * Family: SNF-198; provider: 2; profile: lld/test/ELF/lto/thinlto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3170; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 199020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 199021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 199022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 199023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 199024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 199025; }
