/* Controlled native-loader fixture.
 * Family: SNF-078; provider: 1; profile: lld/test/ELF/undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1249; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 79010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 79011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 79012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 79013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 79014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 79015; }
