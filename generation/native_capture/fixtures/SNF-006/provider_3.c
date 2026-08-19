/* Controlled native-loader fixture.
 * Family: SNF-006; provider: 3; profile: lld/test/ELF/export-dynamic-symbol.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 99; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 7030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 7031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 7032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 7033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 7034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 7035; }
