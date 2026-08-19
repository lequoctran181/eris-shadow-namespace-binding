/* Controlled native-loader fixture.
 * Family: SNF-108; provider: 4; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_no_rtti.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1732; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 109041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 109042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 109043; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 109045; }
