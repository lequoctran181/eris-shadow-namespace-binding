/* Controlled native-loader fixture.
 * Family: SNF-039; provider: 7; profile: lld/test/ELF/relro-init-fini-script.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 631; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 40070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 40071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 40072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 40073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 40074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 40075; }
