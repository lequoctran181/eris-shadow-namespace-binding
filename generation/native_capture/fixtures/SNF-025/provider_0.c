/* Controlled native-loader fixture.
 * Family: SNF-025; provider: 0; profile: lld/test/ELF/copy-errors.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 400; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 26002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 26003; }
