/* Controlled native-loader fixture.
 * Family: SNF-021; provider: 0; profile: lld/test/ELF/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 336; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 22000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 22001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 22002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 22003; }
