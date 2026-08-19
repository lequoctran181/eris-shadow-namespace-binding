/* Controlled native-loader fixture.
 * Family: SNF-015; provider: 0; profile: lld/test/ELF/interconnected-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 240; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 16000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 16001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 16002; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 16005; }
