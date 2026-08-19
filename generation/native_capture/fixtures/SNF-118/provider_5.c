/* Controlled native-loader fixture.
 * Family: SNF-118; provider: 5; profile: lld/test/ELF/weak-undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1893; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 119051; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 119053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 119054; }
