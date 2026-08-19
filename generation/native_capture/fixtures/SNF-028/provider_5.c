/* Controlled native-loader fixture.
 * Family: SNF-028; provider: 5; profile: lld/test/ELF/verdef-defaultver.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 453; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 29050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 29051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 29052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 29053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 29054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 29055; }
