/* Controlled native-loader fixture.
 * Family: SNF-036; provider: 5; profile: lld/test/ELF/as-needed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 581; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 37050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 37051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 37052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 37053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 37054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 37055; }
