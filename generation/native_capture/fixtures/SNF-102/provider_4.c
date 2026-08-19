/* Controlled native-loader fixture.
 * Family: SNF-102; provider: 4; profile: lld/test/ELF/allow-shlib-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1636; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 103040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 103041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 103043; }
