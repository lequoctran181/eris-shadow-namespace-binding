/* Controlled native-loader fixture.
 * Family: SNF-026; provider: 0; profile: lld/test/ELF/gc-sections-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 416; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 27002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 27003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 27004; }
