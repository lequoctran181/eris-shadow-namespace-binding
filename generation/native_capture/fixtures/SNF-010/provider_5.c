/* Controlled native-loader fixture.
 * Family: SNF-010; provider: 5; profile: lld/test/ELF/aarch64-variant_pcs.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 165; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 11050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 11051; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 11053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 11054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 11055; }
