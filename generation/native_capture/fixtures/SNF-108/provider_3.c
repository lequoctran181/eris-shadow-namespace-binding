/* Controlled native-loader fixture.
 * Family: SNF-108; provider: 3; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_no_rtti.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1731; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 109031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 109032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 109034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 109035; }
