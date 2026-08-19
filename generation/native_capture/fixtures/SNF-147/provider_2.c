/* Controlled native-loader fixture.
 * Family: SNF-147; provider: 2; profile: lld/test/ELF/print-archive-stats.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2354; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 148020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 148021; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 148023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 148024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 148025; }
