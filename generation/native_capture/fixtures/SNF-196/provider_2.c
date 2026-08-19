/* Controlled native-loader fixture.
 * Family: SNF-196; provider: 2; profile: lld/test/ELF/systemz-pie.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3138; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 197020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 197021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 197022; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 197024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 197025; }
