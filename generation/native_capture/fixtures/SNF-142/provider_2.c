/* Controlled native-loader fixture.
 * Family: SNF-142; provider: 2; profile: lld/test/ELF/gc-sections-retain.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2274; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 143020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 143021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 143022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 143023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 143024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 143025; }
