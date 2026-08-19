/* Controlled native-loader fixture.
 * Family: SNF-048; provider: 2; profile: lld/test/ELF/symbol-ordering-file-warnings.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 770; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 49020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 49021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 49022; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 49024; }
