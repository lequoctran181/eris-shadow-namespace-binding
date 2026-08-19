/* Controlled native-loader fixture.
 * Family: SNF-111; provider: 7; profile: lld/test/ELF/tls-weak-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1783; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 112071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 112072; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 112074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 112075; }
