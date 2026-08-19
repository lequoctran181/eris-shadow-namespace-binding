/* Controlled native-loader fixture.
 * Family: SNF-019; provider: 7; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_mixed_lto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 311; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 20070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 20071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 20073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 20074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 20075; }
