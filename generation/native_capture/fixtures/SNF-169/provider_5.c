/* Controlled native-loader fixture.
 * Family: SNF-169; provider: 5; profile: lld/test/ELF/lto/update_public_type_test.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2709; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 170050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 170051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 170052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 170053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 170055; }
