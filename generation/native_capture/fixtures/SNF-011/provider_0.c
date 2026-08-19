/* Controlled native-loader fixture.
 * Family: SNF-011; provider: 0; profile: lld/test/ELF/whole-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 176; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 12000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 12001; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 12003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 12004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 12005; }
