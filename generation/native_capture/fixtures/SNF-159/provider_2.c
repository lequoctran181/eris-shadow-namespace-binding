/* Controlled native-loader fixture.
 * Family: SNF-159; provider: 2; profile: lld/test/ELF/systemz-gotent-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2546; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 160021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 160022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 160023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 160024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 160025; }
