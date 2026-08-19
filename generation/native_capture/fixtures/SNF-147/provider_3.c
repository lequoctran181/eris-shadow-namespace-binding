/* Controlled native-loader fixture.
 * Family: SNF-147; provider: 3; profile: lld/test/ELF/print-archive-stats.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2355; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 148030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 148031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 148032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 148033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 148034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 148035; }
