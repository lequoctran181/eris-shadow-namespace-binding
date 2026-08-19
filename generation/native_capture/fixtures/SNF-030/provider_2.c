/* Controlled native-loader fixture.
 * Family: SNF-030; provider: 2; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 482; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 31020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 31021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 31022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 31023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 31024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 31025; }
