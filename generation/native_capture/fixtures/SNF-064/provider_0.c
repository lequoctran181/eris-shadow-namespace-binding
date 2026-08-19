/* Controlled native-loader fixture.
 * Family: SNF-064; provider: 0; profile: lld/test/ELF/hexagon-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1024; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 65001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 65002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 65003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 65004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 65005; }
