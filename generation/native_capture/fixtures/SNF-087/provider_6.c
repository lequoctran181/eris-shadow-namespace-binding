/* Controlled native-loader fixture.
 * Family: SNF-087; provider: 6; profile: lld/test/ELF/arm-cmse-diagnostics.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1398; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 88061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 88062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 88063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 88064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 88065; }
