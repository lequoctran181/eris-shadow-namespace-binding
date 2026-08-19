/* Controlled native-loader fixture.
 * Family: SNF-008; provider: 5; profile: lld/test/ELF/arm-thumb-plt-range-thunk-os.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 133; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 9050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 9051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 9052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 9053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 9055; }
