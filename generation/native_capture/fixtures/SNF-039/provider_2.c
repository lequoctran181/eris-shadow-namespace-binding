/* Controlled native-loader fixture.
 * Family: SNF-039; provider: 2; profile: lld/test/ELF/relro-init-fini-script.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 626; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 40021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 40022; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 40025; }
