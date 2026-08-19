/* Controlled native-loader fixture.
 * Family: SNF-035; provider: 2; profile: lld/test/ELF/shlib-undefined-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 562; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 36020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 36021; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 36023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 36024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 36025; }
