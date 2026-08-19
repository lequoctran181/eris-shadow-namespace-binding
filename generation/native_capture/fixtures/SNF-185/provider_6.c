/* Controlled native-loader fixture.
 * Family: SNF-185; provider: 6; profile: lld/test/ELF/version-symbol-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2966; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 186060; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 186062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 186063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 186064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 186065; }
