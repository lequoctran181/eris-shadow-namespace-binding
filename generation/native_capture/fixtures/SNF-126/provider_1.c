/* Controlled native-loader fixture.
 * Family: SNF-126; provider: 1; profile: lld/test/ELF/gdb-index-gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2017; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 127011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 127012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 127013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 127014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 127015; }
