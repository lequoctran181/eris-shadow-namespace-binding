/* Controlled native-loader fixture.
 * Family: SNF-166; provider: 4; profile: lld/test/ELF/loongarch-pc-hi20-lo12-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2660; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 167040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 167041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 167042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 167043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 167044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 167045; }
