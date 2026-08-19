/* Controlled native-loader fixture.
 * Family: SNF-095; provider: 3; profile: lld/test/ELF/archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1523; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 96031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 96032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 96034; }
