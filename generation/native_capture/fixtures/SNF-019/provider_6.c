/* Controlled native-loader fixture.
 * Family: SNF-019; provider: 6; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_mixed_lto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 310; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 20060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 20061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 20063; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 20065; }
