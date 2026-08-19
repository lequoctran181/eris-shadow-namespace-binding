/* Controlled native-loader fixture.
 * Family: SNF-019; provider: 1; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_mixed_lto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 305; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 20010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 20011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 20013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 20014; }
