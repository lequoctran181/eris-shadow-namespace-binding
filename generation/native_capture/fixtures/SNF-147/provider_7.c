/* Controlled native-loader fixture.
 * Family: SNF-147; provider: 7; profile: lld/test/ELF/print-archive-stats.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2359; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 148070; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 148073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 148074; }
