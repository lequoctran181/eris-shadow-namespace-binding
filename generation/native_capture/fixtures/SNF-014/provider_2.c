/* Controlled native-loader fixture.
 * Family: SNF-014; provider: 2; profile: lld/test/ELF/lto/wrap-unreferenced-before-codegen.test
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 226; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 15020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 15021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 15022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 15023; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 15025; }
