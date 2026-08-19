/* Controlled native-loader fixture.
 * Family: SNF-039; provider: 0; profile: lld/test/ELF/relro-init-fini-script.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 624; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 40000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 40001; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 40003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 40004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 40005; }
