/* Controlled native-loader fixture.
 * Family: SNF-110; provider: 1; profile: lld/test/ELF/ppc64-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1761; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 111010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 111011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 111012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 111013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 111014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 111015; }
