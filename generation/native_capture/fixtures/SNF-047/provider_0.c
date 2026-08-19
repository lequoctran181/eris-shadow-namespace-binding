/* Controlled native-loader fixture.
 * Family: SNF-047; provider: 0; profile: lld/test/ELF/common-archive-lookup.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 752; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 48001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 48002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 48003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 48004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 48005; }
