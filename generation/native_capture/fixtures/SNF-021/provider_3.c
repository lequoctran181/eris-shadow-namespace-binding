/* Controlled native-loader fixture.
 * Family: SNF-021; provider: 3; profile: lld/test/ELF/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 339; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 22030; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 22033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 22035; }
