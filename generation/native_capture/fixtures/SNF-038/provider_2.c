/* Controlled native-loader fixture.
 * Family: SNF-038; provider: 2; profile: lld/test/ELF/allow-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 610; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 39020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 39021; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 39023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 39024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 39025; }
