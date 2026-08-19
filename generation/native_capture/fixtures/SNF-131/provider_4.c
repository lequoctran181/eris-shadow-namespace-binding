/* Controlled native-loader fixture.
 * Family: SNF-131; provider: 4; profile: lld/test/ELF/wrap-extract-real.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2100; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 132040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 132041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 132042; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 132044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 132045; }
