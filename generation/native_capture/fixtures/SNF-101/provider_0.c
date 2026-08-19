/* Controlled native-loader fixture.
 * Family: SNF-101; provider: 0; profile: lld/test/ELF/aarch64-gnu-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1616; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 102000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 102001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 102002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 102003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 102004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 102005; }
