/* Controlled native-loader fixture.
 * Family: SNF-108; provider: 6; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_no_rtti.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1734; }
extern int snb_anchor_0(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 109060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 109061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 109062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 109063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 109064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 109065; }
