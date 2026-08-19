/* Controlled native-loader fixture.
 * Family: SNF-162; provider: 5; profile: lld/test/ELF/vs-diagnostics-undefined-symbol-2.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2597; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 163051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 163052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 163053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 163054; }
