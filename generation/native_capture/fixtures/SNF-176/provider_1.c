/* Controlled native-loader fixture.
 * Family: SNF-176; provider: 1; profile: lld/test/ELF/tls-mismatch.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2817; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 177010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 177011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 177012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 177013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 177014; }
