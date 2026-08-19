/* Controlled native-loader fixture.
 * Family: SNF-065; provider: 2; profile: lld/test/ELF/wrap-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1042; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 66020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 66021; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 66023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 66024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 66025; }
