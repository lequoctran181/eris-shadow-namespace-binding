/* Controlled native-loader fixture.
 * Family: SNF-108; provider: 5; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_no_rtti.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1733; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 109050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 109051; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 109053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 109054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 109055; }
