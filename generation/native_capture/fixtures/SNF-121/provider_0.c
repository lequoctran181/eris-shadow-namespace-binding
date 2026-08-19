/* Controlled native-loader fixture.
 * Family: SNF-121; provider: 0; profile: lld/test/ELF/icf-safe.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1936; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 122000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 122001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 122002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 122003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 122004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 122005; }
