/* Controlled native-loader fixture.
 * Family: SNF-047; provider: 2; profile: lld/test/ELF/common-archive-lookup.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 754; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 48021; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 48023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 48024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 48025; }
