/* Controlled native-loader fixture.
 * Family: SNF-015; provider: 1; profile: lld/test/ELF/interconnected-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 241; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 16010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 16011; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 16013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 16015; }
