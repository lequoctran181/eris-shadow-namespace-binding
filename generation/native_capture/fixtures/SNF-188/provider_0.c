/* Controlled native-loader fixture.
 * Family: SNF-188; provider: 0; profile: lld/test/ELF/relro-omagic.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 3008; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 189000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 189001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 189002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 189003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 189004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 189005; }
