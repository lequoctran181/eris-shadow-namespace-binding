/* Controlled native-loader fixture.
 * Family: SNF-021; provider: 6; profile: lld/test/ELF/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 342; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 22060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 22061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 22062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 22063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 22064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 22065; }
