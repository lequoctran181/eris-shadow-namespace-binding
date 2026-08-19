/* Controlled native-loader fixture.
 * Family: SNF-107; provider: 0; profile: lld/test/ELF/lto/weakodr-visibility.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1712; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 108000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 108001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 108002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 108003; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 108005; }
