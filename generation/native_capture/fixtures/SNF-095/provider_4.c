/* Controlled native-loader fixture.
 * Family: SNF-095; provider: 4; profile: lld/test/ELF/archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1524; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 96041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 96042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 96043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 96044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 96045; }
