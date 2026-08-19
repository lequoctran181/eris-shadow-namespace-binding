/* Controlled native-loader fixture.
 * Family: SNF-041; provider: 7; profile: lld/test/ELF/linkerscript/symbolreferenced.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 663; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 42070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 42072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 42073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 42074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 42075; }
