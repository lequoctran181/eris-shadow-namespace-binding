/* Controlled native-loader fixture.
 * Family: SNF-102; provider: 0; profile: lld/test/ELF/allow-shlib-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1632; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 103001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 103002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 103003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 103004; }
