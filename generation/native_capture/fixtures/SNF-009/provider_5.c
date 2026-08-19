/* Controlled native-loader fixture.
 * Family: SNF-009; provider: 5; profile: lld/test/ELF/arm-thunk-edgecase.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 149; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 10050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 10051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 10052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 10053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 10054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 10055; }
