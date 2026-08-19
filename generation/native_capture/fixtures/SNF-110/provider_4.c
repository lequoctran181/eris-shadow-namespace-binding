/* Controlled native-loader fixture.
 * Family: SNF-110; provider: 4; profile: lld/test/ELF/ppc64-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1764; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 111040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 111041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 111042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 111043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 111044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 111045; }
