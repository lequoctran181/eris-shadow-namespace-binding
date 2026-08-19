/* Controlled native-loader fixture.
 * Family: SNF-042; provider: 2; profile: lld/test/ELF/why-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 674; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 43020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 43021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 43022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 43024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 43025; }
