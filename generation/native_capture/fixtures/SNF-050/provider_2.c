/* Controlled native-loader fixture.
 * Family: SNF-050; provider: 2; profile: lld/test/ELF/gnu-ifunc-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 802; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 51020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 51021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 51022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 51023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 51024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 51025; }
