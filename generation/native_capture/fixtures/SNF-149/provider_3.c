/* Controlled native-loader fixture.
 * Family: SNF-149; provider: 3; profile: lld/test/ELF/linkerscript/memory-err.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2387; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 150032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 150033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 150034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 150035; }
