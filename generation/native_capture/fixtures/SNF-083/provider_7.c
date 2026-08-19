/* Controlled native-loader fixture.
 * Family: SNF-083; provider: 7; profile: lld/test/ELF/lto/internalize-exportdyn.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1335; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 84070; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 84072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 84073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 84074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 84075; }
