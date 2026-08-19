/* Controlled native-loader fixture.
 * Family: SNF-055; provider: 1; profile: lld/test/ELF/lto/thinlto-index-only.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 881; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 56010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 56011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 56012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 56013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 56014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 56015; }
