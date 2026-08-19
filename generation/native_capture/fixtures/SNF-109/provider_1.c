/* Controlled native-loader fixture.
 * Family: SNF-109; provider: 1; profile: lld/test/ELF/gnu-ifunc-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1745; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 110010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 110011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 110012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 110013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 110014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 110015; }
