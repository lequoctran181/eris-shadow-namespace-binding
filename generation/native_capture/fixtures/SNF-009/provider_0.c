/* Controlled native-loader fixture.
 * Family: SNF-009; provider: 0; profile: lld/test/ELF/arm-thunk-edgecase.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 144; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 10000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 10001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 10002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 10003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 10004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 10005; }
