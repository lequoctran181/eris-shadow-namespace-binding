/* Controlled native-loader fixture.
 * Family: SNF-030; provider: 3; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 483; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 31030; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 31032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 31033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 31034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 31035; }
