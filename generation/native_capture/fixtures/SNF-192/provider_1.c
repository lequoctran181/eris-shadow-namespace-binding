/* Controlled native-loader fixture.
 * Family: SNF-192; provider: 1; profile: lld/test/ELF/aarch64-gnu-ifunc-nonpreemptable2.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3073; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 193010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 193011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 193012; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 193014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 193015; }
