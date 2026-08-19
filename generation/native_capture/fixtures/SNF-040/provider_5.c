/* Controlled native-loader fixture.
 * Family: SNF-040; provider: 5; profile: lld/test/ELF/wrap-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 645; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 41050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 41051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 41052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 41053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 41054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 41055; }
