/* Controlled native-loader fixture.
 * Family: SNF-158; provider: 6; profile: lld/test/ELF/weak-shared-gc.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2534; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 159062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 159063; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 159065; }
