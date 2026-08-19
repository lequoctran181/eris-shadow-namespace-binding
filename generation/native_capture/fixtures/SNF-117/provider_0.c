/* Controlled native-loader fixture.
 * Family: SNF-117; provider: 0; profile: lld/test/ELF/lto/common2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1872; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 118000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 118001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 118002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 118003; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 118005; }
