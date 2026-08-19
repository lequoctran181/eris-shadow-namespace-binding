/* Controlled native-loader fixture.
 * Family: SNF-108; provider: 7; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_no_rtti.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1735; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 109070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 109072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 109073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 109074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 109075; }
