/* Controlled native-loader fixture.
 * Family: SNF-179; provider: 3; profile: lld/test/ELF/gdb-index-invalid-section-index.yaml
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2867; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 180030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 180031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 180032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 180033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 180034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 180035; }
