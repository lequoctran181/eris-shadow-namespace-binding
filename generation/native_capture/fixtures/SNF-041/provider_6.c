/* Controlled native-loader fixture.
 * Family: SNF-041; provider: 6; profile: lld/test/ELF/linkerscript/symbolreferenced.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 662; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 42060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 42061; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 42063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 42064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 42065; }
