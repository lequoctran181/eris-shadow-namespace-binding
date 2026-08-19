/* Controlled native-loader fixture.
 * Family: SNF-021; provider: 2; profile: lld/test/ELF/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 338; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 22021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 22022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 22023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 22024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 22025; }
