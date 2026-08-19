/* Controlled native-loader fixture.
 * Family: SNF-195; provider: 3; profile: lld/test/ELF/loongarch-relax-tlsdesc.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3123; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 196031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 196032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 196033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 196034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 196035; }
