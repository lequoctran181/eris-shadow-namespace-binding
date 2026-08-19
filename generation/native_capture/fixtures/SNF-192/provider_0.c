/* Controlled native-loader fixture.
 * Family: SNF-192; provider: 0; profile: lld/test/ELF/aarch64-gnu-ifunc-nonpreemptable2.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 3072; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 193000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 193001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 193002; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 193004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 193005; }
