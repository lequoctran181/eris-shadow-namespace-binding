/* Controlled native-loader fixture.
 * Family: SNF-154; provider: 0; profile: lld/test/ELF/lto/wrap-2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2464; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 155000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 155001; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 155003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 155004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 155005; }
