/* Controlled native-loader fixture.
 * Family: SNF-111; provider: 6; profile: lld/test/ELF/tls-weak-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1782; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 112060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 112061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 112062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 112063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 112064; }
