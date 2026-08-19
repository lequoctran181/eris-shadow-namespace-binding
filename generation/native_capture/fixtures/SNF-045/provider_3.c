/* Controlled native-loader fixture.
 * Family: SNF-045; provider: 3; profile: lld/test/ELF/bp-section-orderer.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 723; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 46031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 46033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 46034; }
