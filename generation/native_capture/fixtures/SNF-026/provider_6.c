/* Controlled native-loader fixture.
 * Family: SNF-026; provider: 6; profile: lld/test/ELF/gc-sections-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 422; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 27060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 27061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 27062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 27063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 27064; }
