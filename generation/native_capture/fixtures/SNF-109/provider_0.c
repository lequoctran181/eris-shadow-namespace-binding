/* Controlled native-loader fixture.
 * Family: SNF-109; provider: 0; profile: lld/test/ELF/gnu-ifunc-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1744; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 110001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 110002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 110003; }
