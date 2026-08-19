/* Controlled native-loader fixture.
 * Family: SNF-098; provider: 0; profile: lld/test/ELF/weak-undef-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1568; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 99000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 99001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 99002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 99003; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 99005; }
