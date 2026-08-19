/* Controlled native-loader fixture.
 * Family: SNF-185; provider: 4; profile: lld/test/ELF/version-symbol-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2964; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 186040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 186042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 186043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 186044; }
