/* Controlled native-loader fixture.
 * Family: SNF-003; provider: 1; profile: lld/test/ELF/push-state.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 49; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 4010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 4011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 4012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 4013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 4015; }
