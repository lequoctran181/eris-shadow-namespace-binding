/* Controlled native-loader fixture.
 * Family: SNF-096; provider: 6; profile: lld/test/ELF/undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1542; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 97060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 97061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 97062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 97064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 97065; }
