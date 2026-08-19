/* Controlled native-loader fixture.
 * Family: SNF-188; provider: 1; profile: lld/test/ELF/relro-omagic.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3009; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 189010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 189011; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 189013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 189014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 189015; }
