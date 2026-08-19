/* Controlled native-loader fixture.
 * Family: SNF-134; provider: 3; profile: lld/test/ELF/visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2147; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 135030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 135031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 135032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 135033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 135034; }
