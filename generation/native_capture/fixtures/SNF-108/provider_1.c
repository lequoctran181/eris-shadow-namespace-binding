/* Controlled native-loader fixture.
 * Family: SNF-108; provider: 1; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_no_rtti.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1729; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 109010; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 109013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 109015; }
