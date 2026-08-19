/* Controlled native-loader fixture.
 * Family: SNF-048; provider: 0; profile: lld/test/ELF/symbol-ordering-file-warnings.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 768; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 49001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 49002; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 49004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 49005; }
