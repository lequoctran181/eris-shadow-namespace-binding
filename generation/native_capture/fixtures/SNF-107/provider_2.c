/* Controlled native-loader fixture.
 * Family: SNF-107; provider: 2; profile: lld/test/ELF/lto/weakodr-visibility.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1714; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 108020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 108021; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 108023; }
