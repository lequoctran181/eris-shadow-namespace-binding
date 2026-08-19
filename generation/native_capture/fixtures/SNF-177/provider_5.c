/* Controlled native-loader fixture.
 * Family: SNF-177; provider: 5; profile: lld/test/ELF/conflict.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2837; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 178050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 178051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 178052; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 178054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 178055; }
