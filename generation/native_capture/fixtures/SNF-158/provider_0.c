/* Controlled native-loader fixture.
 * Family: SNF-158; provider: 0; profile: lld/test/ELF/weak-shared-gc.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2528; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 159000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 159001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 159002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 159003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 159004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 159005; }
