/* Controlled native-loader fixture.
 * Family: SNF-122; provider: 1; profile: lld/test/ELF/debug-names-type-units.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1953; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 123010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 123011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 123013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 123015; }
