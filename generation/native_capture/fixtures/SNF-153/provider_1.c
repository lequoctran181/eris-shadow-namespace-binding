/* Controlled native-loader fixture.
 * Family: SNF-153; provider: 1; profile: lld/test/ELF/version-script-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2449; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 154010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 154011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 154012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 154014; }
