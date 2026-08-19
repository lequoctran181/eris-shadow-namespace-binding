/* Controlled native-loader fixture.
 * Family: SNF-014; provider: 7; profile: lld/test/ELF/lto/wrap-unreferenced-before-codegen.test
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 231; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 15071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 15072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 15073; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 15075; }
