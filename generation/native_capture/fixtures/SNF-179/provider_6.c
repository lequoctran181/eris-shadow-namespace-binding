/* Controlled native-loader fixture.
 * Family: SNF-179; provider: 6; profile: lld/test/ELF/gdb-index-invalid-section-index.yaml
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2870; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 180060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 180061; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 180063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 180064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 180065; }
