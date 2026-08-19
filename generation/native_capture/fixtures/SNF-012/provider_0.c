/* Controlled native-loader fixture.
 * Family: SNF-012; provider: 0; profile: lld/test/ELF/startstop-visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 192; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 13000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 13001; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 13003; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 13005; }
