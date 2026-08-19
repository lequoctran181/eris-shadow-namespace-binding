/* Controlled native-loader fixture.
 * Family: SNF-116; provider: 6; profile: lld/test/ELF/lto/comdat2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1862; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 117060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 117061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 117062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 117063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 117064; }
