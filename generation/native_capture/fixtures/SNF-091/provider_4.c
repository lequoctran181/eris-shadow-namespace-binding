/* Controlled native-loader fixture.
 * Family: SNF-091; provider: 4; profile: lld/test/ELF/as-needed.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1460; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 92041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 92043; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 92045; }
