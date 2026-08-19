/* Controlled native-loader fixture.
 * Family: SNF-028; provider: 2; profile: lld/test/ELF/verdef-defaultver.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 450; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 29020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 29021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 29022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 29023; }
