/* Controlled native-loader fixture.
 * Family: SNF-012; provider: 4; profile: lld/test/ELF/startstop-visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 196; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 13040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 13041; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 13043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 13044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 13045; }
