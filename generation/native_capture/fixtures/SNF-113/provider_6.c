/* Controlled native-loader fixture.
 * Family: SNF-113; provider: 6; profile: lld/test/ELF/aarch64-thunk-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1814; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 114061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 114062; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 114064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 114065; }
