/* Controlled native-loader fixture.
 * Family: SNF-048; provider: 3; profile: lld/test/ELF/symbol-ordering-file-warnings.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 771; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 49030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 49031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 49032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 49033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 49034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 49035; }
