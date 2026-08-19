/* Controlled native-loader fixture.
 * Family: SNF-066; provider: 4; profile: lld/test/ELF/gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1060; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 67040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 67041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 67043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 67044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 67045; }
