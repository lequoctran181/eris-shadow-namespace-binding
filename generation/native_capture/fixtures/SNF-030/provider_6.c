/* Controlled native-loader fixture.
 * Family: SNF-030; provider: 6; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 486; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 31062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 31063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 31064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 31065; }
