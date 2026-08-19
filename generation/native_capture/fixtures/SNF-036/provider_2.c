/* Controlled native-loader fixture.
 * Family: SNF-036; provider: 2; profile: lld/test/ELF/as-needed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 578; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 37020; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 37024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 37025; }
