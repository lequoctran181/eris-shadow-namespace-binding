/* Controlled native-loader fixture.
 * Family: SNF-089; provider: 2; profile: lld/test/ELF/verneed-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1426; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 90021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 90022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 90023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 90024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 90025; }
