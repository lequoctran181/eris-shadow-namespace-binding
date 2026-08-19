/* Controlled native-loader fixture.
 * Family: SNF-029; provider: 6; profile: lld/test/ELF/loongarch-relax-pc-hi20-lo12-got-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 470; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 30061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 30062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 30063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 30064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 30065; }
