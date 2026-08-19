/* Controlled native-loader fixture.
 * Family: SNF-147; provider: 4; profile: lld/test/ELF/print-archive-stats.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2356; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 148040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 148041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 148042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 148043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 148044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 148045; }
