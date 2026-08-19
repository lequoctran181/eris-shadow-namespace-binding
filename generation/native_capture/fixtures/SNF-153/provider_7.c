/* Controlled native-loader fixture.
 * Family: SNF-153; provider: 7; profile: lld/test/ELF/version-script-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2455; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 154071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 154072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 154073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 154074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 154075; }
