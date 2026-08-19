/* Controlled native-loader fixture.
 * Family: SNF-179; provider: 2; profile: lld/test/ELF/gdb-index-invalid-section-index.yaml
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2866; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 180021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 180022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 180023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 180024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 180025; }
