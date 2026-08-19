/* Controlled native-loader fixture.
 * Family: SNF-037; provider: 2; profile: lld/test/ELF/trace-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 594; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 38020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 38021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 38022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 38024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 38025; }
