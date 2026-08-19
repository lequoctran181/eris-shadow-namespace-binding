/* Controlled native-loader fixture.
 * Family: SNF-057; provider: 2; profile: lld/test/ELF/as-needed-in-regular.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 914; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 58021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 58022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 58023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 58024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 58025; }
