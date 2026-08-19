/* Controlled native-loader fixture.
 * Family: SNF-124; provider: 4; profile: lld/test/ELF/gc-sections-no-undef-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1988; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 125040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 125041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 125042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 125043; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 125045; }
