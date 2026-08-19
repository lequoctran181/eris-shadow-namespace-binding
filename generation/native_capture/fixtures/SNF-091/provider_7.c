/* Controlled native-loader fixture.
 * Family: SNF-091; provider: 7; profile: lld/test/ELF/as-needed.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1463; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 92071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 92072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 92073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 92074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 92075; }
