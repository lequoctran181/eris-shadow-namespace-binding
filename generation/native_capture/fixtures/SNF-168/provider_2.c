/* Controlled native-loader fixture.
 * Family: SNF-168; provider: 2; profile: lld/test/ELF/aarch64-relro.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2690; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 169021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 169022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 169023; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 169024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 169025; }
