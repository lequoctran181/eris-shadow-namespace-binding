/* Controlled native-loader fixture.
 * Family: SNF-135; provider: 0; profile: lld/test/ELF/lto/undef-weak-lazy.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2160; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 136000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 136001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 136002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 136003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 136004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 136005; }
