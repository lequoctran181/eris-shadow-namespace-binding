/* Controlled native-loader fixture.
 * Family: SNF-034; provider: 6; profile: lld/test/ELF/aarch64-ifunc-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 550; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 35061; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 35063; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 35065; }
