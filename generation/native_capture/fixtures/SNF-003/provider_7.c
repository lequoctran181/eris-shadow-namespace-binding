/* Controlled native-loader fixture.
 * Family: SNF-003; provider: 7; profile: lld/test/ELF/push-state.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 55; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 4070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 4071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 4072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 4073; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 4075; }
