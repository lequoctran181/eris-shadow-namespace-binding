/* Controlled native-loader fixture.
 * Family: SNF-079; provider: 7; profile: lld/test/ELF/lto/archive.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1271; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 80070; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 80072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 80073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 80074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 80075; }
