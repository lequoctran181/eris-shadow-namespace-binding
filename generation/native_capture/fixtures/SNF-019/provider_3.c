/* Controlled native-loader fixture.
 * Family: SNF-019; provider: 3; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos_mixed_lto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 307; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 20030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 20031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 20032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 20033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 20034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 20035; }
