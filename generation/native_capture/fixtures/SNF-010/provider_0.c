/* Controlled native-loader fixture.
 * Family: SNF-010; provider: 0; profile: lld/test/ELF/aarch64-variant_pcs.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 160; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 11000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 11001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 11002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 11003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 11004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 11005; }
