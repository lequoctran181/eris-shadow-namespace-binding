/* Controlled native-loader fixture.
 * Family: SNF-187; provider: 1; profile: lld/test/ELF/ppc32-local-branch.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2993; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 188010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 188011; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 188013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 188014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 188015; }
