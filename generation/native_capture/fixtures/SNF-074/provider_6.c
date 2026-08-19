/* Controlled native-loader fixture.
 * Family: SNF-074; provider: 6; profile: lld/test/ELF/wrap.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1190; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 75060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 75061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 75062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 75063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 75064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 75065; }
