/* Controlled native-loader fixture.
 * Family: SNF-186; provider: 0; profile: lld/test/ELF/lto/duplicated-name.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2976; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 187000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 187001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 187002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 187003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 187004; }
