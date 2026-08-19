/* Controlled native-loader fixture.
 * Family: SNF-060; provider: 7; profile: lld/test/ELF/gc-absolute.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 967; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 61070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 61071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 61073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 61074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 61075; }
