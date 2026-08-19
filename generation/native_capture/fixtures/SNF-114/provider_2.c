/* Controlled native-loader fixture.
 * Family: SNF-114; provider: 2; profile: lld/test/ELF/dt_flags.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1826; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 115020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 115021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 115022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 115023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 115024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 115025; }
