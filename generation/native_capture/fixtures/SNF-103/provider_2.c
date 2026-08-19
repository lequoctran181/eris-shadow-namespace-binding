/* Controlled native-loader fixture.
 * Family: SNF-103; provider: 2; profile: lld/test/ELF/debug-dead-reloc.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1650; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 104020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 104021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 104022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 104024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 104025; }
