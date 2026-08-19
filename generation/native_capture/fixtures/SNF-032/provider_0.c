/* Controlled native-loader fixture.
 * Family: SNF-032; provider: 0; profile: lld/test/ELF/local-symbols-order.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 512; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 33000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 33001; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 33003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 33004; }
