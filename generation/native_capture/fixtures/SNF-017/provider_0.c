/* Controlled native-loader fixture.
 * Family: SNF-017; provider: 0; profile: lld/test/ELF/verneed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 272; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 18000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 18001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 18002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 18003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 18004; }
