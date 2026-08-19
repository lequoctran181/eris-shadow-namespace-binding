/* Controlled native-loader fixture.
 * Family: SNF-175; provider: 6; profile: lld/test/ELF/wrap-dynamic-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2806; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 176061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 176062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 176063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 176064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 176065; }
