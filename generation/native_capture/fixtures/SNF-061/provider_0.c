/* Controlled native-loader fixture.
 * Family: SNF-061; provider: 0; profile: lld/test/ELF/version-script-symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 976; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 62000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 62001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 62002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 62003; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 62005; }
