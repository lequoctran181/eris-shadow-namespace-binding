/* Controlled native-loader fixture.
 * Family: SNF-162; provider: 6; profile: lld/test/ELF/vs-diagnostics-undefined-symbol-2.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2598; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 163060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 163062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 163064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 163065; }
