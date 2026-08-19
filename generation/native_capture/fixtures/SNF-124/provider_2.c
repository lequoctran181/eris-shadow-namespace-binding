/* Controlled native-loader fixture.
 * Family: SNF-124; provider: 2; profile: lld/test/ELF/gc-sections-no-undef-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1986; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 125021; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 125023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 125024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 125025; }
