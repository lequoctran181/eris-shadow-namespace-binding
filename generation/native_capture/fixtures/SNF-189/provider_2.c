/* Controlled native-loader fixture.
 * Family: SNF-189; provider: 2; profile: lld/test/ELF/relocatable-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3026; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 190020; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 190022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 190023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 190024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 190025; }
