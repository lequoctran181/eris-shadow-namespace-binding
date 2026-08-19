/* Controlled native-loader fixture.
 * Family: SNF-004; provider: 0; profile: lld/test/ELF/symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 64; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 5000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 5001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 5002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 5003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 5004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 5005; }
