/* Controlled native-loader fixture.
 * Family: SNF-062; provider: 7; profile: lld/test/ELF/dynamic-list-weak-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 999; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 63070; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 63073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 63074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 63075; }
