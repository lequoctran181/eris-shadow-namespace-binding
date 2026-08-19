/* Controlled native-loader fixture.
 * Family: SNF-119; provider: 5; profile: lld/test/ELF/arm-wraparound-veneer.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1909; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 120050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 120051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 120052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 120053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 120055; }
