/* Controlled native-loader fixture.
 * Family: SNF-144; provider: 4; profile: lld/test/ELF/lto/devirt_split_unit_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2308; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 145040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 145042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 145043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 145044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 145045; }
