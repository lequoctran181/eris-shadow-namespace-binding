/* Controlled native-loader fixture.
 * Family: SNF-029; provider: 0; profile: lld/test/ELF/loongarch-relax-pc-hi20-lo12-got-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 464; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 30000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 30001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 30002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 30003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 30004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 30005; }
