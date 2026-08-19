/* Controlled native-loader fixture.
 * Family: SNF-166; provider: 2; profile: lld/test/ELF/loongarch-pc-hi20-lo12-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2658; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 167020; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 167022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 167024; }
