/* Controlled native-loader fixture.
 * Family: SNF-073; provider: 7; profile: lld/test/ELF/tls.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1175; }
extern int snb_anchor_1(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 74070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 74071; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 74073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 74074; }
