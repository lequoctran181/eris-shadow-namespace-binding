/* Controlled native-loader fixture.
 * Family: SNF-133; provider: 6; profile: lld/test/ELF/aarch64-pauth-rela-iplt-end.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2134; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 134061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 134062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 134063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 134064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 134065; }
