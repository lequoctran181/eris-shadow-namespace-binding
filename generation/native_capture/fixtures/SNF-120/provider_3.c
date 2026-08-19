/* Controlled native-loader fixture.
 * Family: SNF-120; provider: 3; profile: lld/test/ELF/verneed.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1923; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 121030; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 121033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 121034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 121035; }
