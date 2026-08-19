/* Controlled native-loader fixture.
 * Family: SNF-009; provider: 7; profile: lld/test/ELF/arm-thunk-edgecase.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 151; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 10074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 10075; }
