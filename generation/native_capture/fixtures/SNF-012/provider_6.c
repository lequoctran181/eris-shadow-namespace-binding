/* Controlled native-loader fixture.
 * Family: SNF-012; provider: 6; profile: lld/test/ELF/startstop-visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 198; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 13060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 13061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 13062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 13063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 13064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 13065; }
