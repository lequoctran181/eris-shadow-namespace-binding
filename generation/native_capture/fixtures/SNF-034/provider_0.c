/* Controlled native-loader fixture.
 * Family: SNF-034; provider: 0; profile: lld/test/ELF/aarch64-ifunc-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 544; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 35000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 35001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 35002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 35003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 35004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 35005; }
