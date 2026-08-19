/* Controlled native-loader fixture.
 * Family: SNF-091; provider: 6; profile: lld/test/ELF/as-needed.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1462; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 92061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 92062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 92063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 92064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 92065; }
