/* Controlled native-loader fixture.
 * Family: SNF-038; provider: 0; profile: lld/test/ELF/allow-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 608; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 39000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 39001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 39002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 39003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 39004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 39005; }
