/* Controlled native-loader fixture.
 * Family: SNF-015; provider: 4; profile: lld/test/ELF/interconnected-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 244; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 16040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 16042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 16043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 16044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 16045; }
