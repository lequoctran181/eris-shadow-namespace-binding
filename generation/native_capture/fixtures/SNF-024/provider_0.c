/* Controlled native-loader fixture.
 * Family: SNF-024; provider: 0; profile: lld/test/ELF/resolution.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 384; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 25003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 25004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 25005; }
