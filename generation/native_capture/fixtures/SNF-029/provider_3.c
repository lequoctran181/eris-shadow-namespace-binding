/* Controlled native-loader fixture.
 * Family: SNF-029; provider: 3; profile: lld/test/ELF/loongarch-relax-pc-hi20-lo12-got-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 467; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 30030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 30031; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 30033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 30034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 30035; }
