/* Controlled native-loader fixture.
 * Family: SNF-041; provider: 0; profile: lld/test/ELF/linkerscript/symbolreferenced.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 656; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 42000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 42001; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 42003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 42004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 42005; }
