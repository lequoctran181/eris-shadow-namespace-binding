/* Controlled native-loader fixture.
 * Family: SNF-197; provider: 0; profile: lld/test/ELF/x86-64-tls-gd-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 3152; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 198001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 198002; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 198004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 198005; }
