/* Controlled native-loader fixture.
 * Family: SNF-153; provider: 4; profile: lld/test/ELF/version-script-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2452; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 154040; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 154042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 154043; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 154045; }
