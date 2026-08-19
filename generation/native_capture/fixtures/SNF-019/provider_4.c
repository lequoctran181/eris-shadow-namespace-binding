/* Controlled native-loader fixture.
 * Family: SNF-019; provider: 4; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_mixed_lto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 308; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 20040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 20041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 20042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 20043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 20044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 20045; }
