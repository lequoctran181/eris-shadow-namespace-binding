/* Controlled native-loader fixture.
 * Family: SNF-144; provider: 0; profile: lld/test/ELF/lto/devirt_split_unit_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2304; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 145000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 145001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 145002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 145003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 145004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 145005; }
