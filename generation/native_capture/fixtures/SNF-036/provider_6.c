/* Controlled native-loader fixture.
 * Family: SNF-036; provider: 6; profile: lld/test/ELF/as-needed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 582; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 37060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 37061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 37063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 37064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 37065; }
