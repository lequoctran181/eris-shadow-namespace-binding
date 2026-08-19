/* Controlled native-loader fixture.
 * Family: SNF-001; provider: 2; profile: lld/test/ELF/wrap-lazy.test
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 18; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 2020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 2021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 2022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 2023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 2024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 2025; }
