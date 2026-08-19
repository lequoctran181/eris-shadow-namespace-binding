/* Controlled native-loader fixture.
 * Family: SNF-045; provider: 1; profile: lld/test/ELF/bp-section-orderer.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 721; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 46010; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 46012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 46013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 46014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 46015; }
