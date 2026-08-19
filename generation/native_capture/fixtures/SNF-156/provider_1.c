/* Controlled native-loader fixture.
 * Family: SNF-156; provider: 1; profile: lld/test/ELF/lto/resolution.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2497; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 157010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 157011; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 157013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 157014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 157015; }
