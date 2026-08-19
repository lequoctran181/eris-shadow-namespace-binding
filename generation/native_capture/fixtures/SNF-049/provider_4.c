/* Controlled native-loader fixture.
 * Family: SNF-049; provider: 4; profile: lld/test/ELF/lto/lazy-debug.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 788; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 50040; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 50043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 50044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 50045; }
