/* Controlled native-loader fixture.
 * Family: SNF-168; provider: 0; profile: lld/test/ELF/aarch64-relro.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2688; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 169000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 169001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 169002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 169003; }
