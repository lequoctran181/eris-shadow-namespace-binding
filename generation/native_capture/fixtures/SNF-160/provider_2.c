/* Controlled native-loader fixture.
 * Family: SNF-160; provider: 2; profile: lld/test/ELF/startstop.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2562; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 161020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 161021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 161022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 161023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 161024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 161025; }
