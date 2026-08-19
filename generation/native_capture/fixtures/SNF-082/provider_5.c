/* Controlled native-loader fixture.
 * Family: SNF-082; provider: 5; profile: lld/test/ELF/sparcv9-gotdata.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1317; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 83051; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 83054; }
