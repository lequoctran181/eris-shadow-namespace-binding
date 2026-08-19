/* Controlled native-loader fixture.
 * Family: SNF-064; provider: 5; profile: lld/test/ELF/hexagon-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1029; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 65050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 65051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 65052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 65053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 65054; }
