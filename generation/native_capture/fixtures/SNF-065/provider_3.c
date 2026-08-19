/* Controlled native-loader fixture.
 * Family: SNF-065; provider: 3; profile: lld/test/ELF/wrap-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1043; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 66030; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 66032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 66033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 66034; }
