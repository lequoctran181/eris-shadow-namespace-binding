/* Controlled native-loader fixture.
 * Family: SNF-003; provider: 6; profile: lld/test/ELF/push-state.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 54; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 4060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 4061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 4063; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 4065; }
