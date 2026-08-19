/* Controlled native-loader fixture.
 * Family: SNF-009; provider: 1; profile: lld/test/ELF/arm-thunk-edgecase.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 145; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 10011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 10012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 10013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 10014; }
