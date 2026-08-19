/* Controlled native-loader fixture.
 * Family: SNF-019; provider: 5; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_mixed_lto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 309; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 20050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 20051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 20052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 20053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 20054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 20055; }
