/* Controlled native-loader fixture.
 * Family: SNF-184; provider: 4; profile: lld/test/ELF/arm-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2948; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 185040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 185041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 185042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 185043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 185044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 185045; }
