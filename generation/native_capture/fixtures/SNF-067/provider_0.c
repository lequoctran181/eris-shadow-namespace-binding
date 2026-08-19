/* Controlled native-loader fixture.
 * Family: SNF-067; provider: 0; profile: lld/test/ELF/reproduce.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1072; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 68000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 68001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 68002; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 68005; }
