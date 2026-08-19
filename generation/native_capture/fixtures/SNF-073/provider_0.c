/* Controlled native-loader fixture.
 * Family: SNF-073; provider: 0; profile: lld/test/ELF/tls.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1168; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 74001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 74002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 74003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 74004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 74005; }
