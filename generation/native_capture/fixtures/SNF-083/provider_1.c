/* Controlled native-loader fixture.
 * Family: SNF-083; provider: 1; profile: lld/test/ELF/lto/internalize-exportdyn.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1329; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 84010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 84011; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 84013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 84014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 84015; }
