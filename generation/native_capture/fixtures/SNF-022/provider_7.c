/* Controlled native-loader fixture.
 * Family: SNF-022; provider: 7; profile: lld/test/ELF/wrap-drop-shared-original.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 359; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 23070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 23071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 23072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 23073; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 23075; }
