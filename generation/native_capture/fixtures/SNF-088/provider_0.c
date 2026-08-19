/* Controlled native-loader fixture.
 * Family: SNF-088; provider: 0; profile: lld/test/ELF/comdat.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1408; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 89002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 89003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 89004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 89005; }
