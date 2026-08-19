/* Controlled native-loader fixture.
 * Family: SNF-082; provider: 0; profile: lld/test/ELF/sparcv9-gotdata.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1312; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 83000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 83001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 83002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 83003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 83004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 83005; }
