/* Controlled native-loader fixture.
 * Family: SNF-197; provider: 2; profile: lld/test/ELF/x86-64-tls-gd-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3154; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 198020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 198021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 198022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 198023; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 198024; }
