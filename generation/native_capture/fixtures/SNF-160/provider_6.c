/* Controlled native-loader fixture.
 * Family: SNF-160; provider: 6; profile: lld/test/ELF/startstop.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2566; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 161061; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 161063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 161064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 161065; }
