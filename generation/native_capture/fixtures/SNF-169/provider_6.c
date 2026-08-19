/* Controlled native-loader fixture.
 * Family: SNF-169; provider: 6; profile: lld/test/ELF/lto/update_public_type_test.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2710; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 170060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 170061; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 170064; }
