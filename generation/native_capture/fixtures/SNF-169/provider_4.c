/* Controlled native-loader fixture.
 * Family: SNF-169; provider: 4; profile: lld/test/ELF/lto/update_public_type_test.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2708; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 170042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 170043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 170044; }
