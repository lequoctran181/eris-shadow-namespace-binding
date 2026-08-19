/* Controlled native-loader fixture.
 * Family: SNF-110; provider: 0; profile: lld/test/ELF/ppc64-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1760; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 111000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 111001; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 111005; }
