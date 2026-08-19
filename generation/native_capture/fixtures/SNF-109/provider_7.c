/* Controlled native-loader fixture.
 * Family: SNF-109; provider: 7; profile: lld/test/ELF/gnu-ifunc-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1751; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 110070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 110071; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 110073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 110074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 110075; }
