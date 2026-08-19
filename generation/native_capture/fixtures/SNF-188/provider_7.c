/* Controlled native-loader fixture.
 * Family: SNF-188; provider: 7; profile: lld/test/ELF/relro-omagic.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3015; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 189073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 189074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 189075; }
