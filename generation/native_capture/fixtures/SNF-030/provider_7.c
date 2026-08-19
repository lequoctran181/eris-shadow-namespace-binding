/* Controlled native-loader fixture.
 * Family: SNF-030; provider: 7; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 487; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 31070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 31071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 31072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 31073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 31074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 31075; }
