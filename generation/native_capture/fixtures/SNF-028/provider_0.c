/* Controlled native-loader fixture.
 * Family: SNF-028; provider: 0; profile: lld/test/ELF/verdef-defaultver.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 448; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 29000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 29001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 29002; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 29004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 29005; }
