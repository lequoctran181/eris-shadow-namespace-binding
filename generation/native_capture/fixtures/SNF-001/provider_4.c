/* Controlled native-loader fixture.
 * Family: SNF-001; provider: 4; profile: lld/test/ELF/wrap-lazy.test
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 20; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 2040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 2041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 2042; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 2045; }
