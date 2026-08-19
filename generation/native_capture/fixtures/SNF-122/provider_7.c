/* Controlled native-loader fixture.
 * Family: SNF-122; provider: 7; profile: lld/test/ELF/debug-names-type-units.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1959; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 123072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 123073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 123074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 123075; }
