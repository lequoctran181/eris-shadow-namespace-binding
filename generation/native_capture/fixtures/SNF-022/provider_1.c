/* Controlled native-loader fixture.
 * Family: SNF-022; provider: 1; profile: lld/test/ELF/wrap-drop-shared-original.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 353; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 23010; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 23012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 23013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 23014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 23015; }
