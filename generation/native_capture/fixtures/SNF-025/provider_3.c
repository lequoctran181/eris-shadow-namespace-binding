/* Controlled native-loader fixture.
 * Family: SNF-025; provider: 3; profile: lld/test/ELF/copy-errors.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 403; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 26030; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 26032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 26033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 26034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 26035; }
