/* Controlled native-loader fixture.
 * Family: SNF-141; provider: 0; profile: lld/test/ELF/gnu-ifunc-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2256; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 142000; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 142002; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 142004; }
