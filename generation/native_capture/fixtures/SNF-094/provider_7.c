/* Controlled native-loader fixture.
 * Family: SNF-094; provider: 7; profile: lld/test/ELF/executable-undefined-protected-ignoreall.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1511; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 95071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 95072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 95073; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 95075; }
