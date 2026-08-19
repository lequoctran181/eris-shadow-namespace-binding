/* Controlled native-loader fixture.
 * Family: SNF-057; provider: 0; profile: lld/test/ELF/as-needed-in-regular.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 912; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 58000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 58001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 58002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 58003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 58004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 58005; }
