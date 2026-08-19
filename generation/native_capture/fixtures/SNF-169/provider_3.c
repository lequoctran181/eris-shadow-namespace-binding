/* Controlled native-loader fixture.
 * Family: SNF-169; provider: 3; profile: lld/test/ELF/lto/update_public_type_test.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2707; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 170030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 170032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 170033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 170034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 170035; }
