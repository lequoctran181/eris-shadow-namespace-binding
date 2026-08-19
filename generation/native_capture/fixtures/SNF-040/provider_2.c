/* Controlled native-loader fixture.
 * Family: SNF-040; provider: 2; profile: lld/test/ELF/wrap-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 642; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 41021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 41022; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 41024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 41025; }
