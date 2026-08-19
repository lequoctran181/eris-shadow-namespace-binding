/* Controlled native-loader fixture.
 * Family: SNF-118; provider: 4; profile: lld/test/ELF/weak-undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1892; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 119040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 119041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 119042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 119043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 119044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 119045; }
