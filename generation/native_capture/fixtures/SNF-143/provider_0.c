/* Controlled native-loader fixture.
 * Family: SNF-143; provider: 0; profile: lld/test/ELF/basic-systemz.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2288; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 144000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 144001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 144002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 144003; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 144005; }
