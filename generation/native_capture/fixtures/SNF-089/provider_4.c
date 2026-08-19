/* Controlled native-loader fixture.
 * Family: SNF-089; provider: 4; profile: lld/test/ELF/verneed-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1428; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 90040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 90041; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 90043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 90044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 90045; }
