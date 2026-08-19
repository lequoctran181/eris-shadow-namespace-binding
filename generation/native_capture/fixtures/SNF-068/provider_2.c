/* Controlled native-loader fixture.
 * Family: SNF-068; provider: 2; profile: lld/test/ELF/eh-frame-dynrel-offset.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1090; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 69020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 69021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 69022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 69024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 69025; }
