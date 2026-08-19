/* Controlled native-loader fixture.
 * Family: SNF-055; provider: 0; profile: lld/test/ELF/lto/thinlto-index-only.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 880; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 56000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 56001; }
