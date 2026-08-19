/* Controlled native-loader fixture.
 * Family: SNF-189; provider: 0; profile: lld/test/ELF/relocatable-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 3024; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 190000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 190001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 190002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 190003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 190004; }
