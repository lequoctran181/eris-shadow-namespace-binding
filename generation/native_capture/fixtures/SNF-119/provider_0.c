/* Controlled native-loader fixture.
 * Family: SNF-119; provider: 0; profile: lld/test/ELF/arm-wraparound-veneer.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1904; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 120000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 120001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 120002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 120003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 120004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 120005; }
