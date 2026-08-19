/* Controlled native-loader fixture.
 * Family: SNF-091; provider: 0; profile: lld/test/ELF/as-needed.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1456; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 92000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 92001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 92002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 92003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 92004; }
