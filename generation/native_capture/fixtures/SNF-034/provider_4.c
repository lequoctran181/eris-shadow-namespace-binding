/* Controlled native-loader fixture.
 * Family: SNF-034; provider: 4; profile: lld/test/ELF/aarch64-ifunc-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 548; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 35040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 35042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 35043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 35044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 35045; }
