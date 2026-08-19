/* Controlled native-loader fixture.
 * Family: SNF-025; provider: 5; profile: lld/test/ELF/copy-errors.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 405; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 26051; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 26053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 26054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 26055; }
