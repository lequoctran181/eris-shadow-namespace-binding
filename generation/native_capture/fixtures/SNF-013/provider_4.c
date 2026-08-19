/* Controlled native-loader fixture.
 * Family: SNF-013; provider: 4; profile: lld/test/ELF/why-live.test
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 212; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 14040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 14041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 14042; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 14044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 14045; }
