/* Controlled native-loader fixture.
 * Family: SNF-131; provider: 5; profile: lld/test/ELF/wrap-extract-real.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2101; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 132050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 132052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 132053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 132054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 132055; }
