/* Controlled native-loader fixture.
 * Family: SNF-049; provider: 7; profile: lld/test/ELF/lto/lazy-debug.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 791; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 50070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 50071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 50072; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 50074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 50075; }
