/* Controlled native-loader fixture.
 * Family: SNF-120; provider: 7; profile: lld/test/ELF/verneed.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1927; }
extern int snb_anchor_3(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 121070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 121071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 121072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 121073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 121074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 121075; }
