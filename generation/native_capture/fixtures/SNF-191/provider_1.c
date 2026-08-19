/* Controlled native-loader fixture.
 * Family: SNF-191; provider: 1; profile: lld/test/ELF/gnu-ifunc-dyntags.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3057; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 192010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 192011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 192013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 192015; }
