/* Controlled native-loader fixture.
 * Family: SNF-166; provider: 6; profile: lld/test/ELF/loongarch-pc-hi20-lo12-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2662; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 167060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 167061; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 167063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 167064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 167065; }
