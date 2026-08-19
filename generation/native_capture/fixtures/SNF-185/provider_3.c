/* Controlled native-loader fixture.
 * Family: SNF-185; provider: 3; profile: lld/test/ELF/version-symbol-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2963; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 186030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 186031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 186032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 186033; }
