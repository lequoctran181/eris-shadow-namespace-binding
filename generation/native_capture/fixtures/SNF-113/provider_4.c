/* Controlled native-loader fixture.
 * Family: SNF-113; provider: 4; profile: lld/test/ELF/aarch64-thunk-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1812; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 114040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 114041; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 114045; }
