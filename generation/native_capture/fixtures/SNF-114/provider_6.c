/* Controlled native-loader fixture.
 * Family: SNF-114; provider: 6; profile: lld/test/ELF/dt_flags.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1830; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 115060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 115061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 115062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 115063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 115064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 115065; }
