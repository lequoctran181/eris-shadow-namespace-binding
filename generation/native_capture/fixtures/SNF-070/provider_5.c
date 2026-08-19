/* Controlled native-loader fixture.
 * Family: SNF-070; provider: 5; profile: lld/test/ELF/aarch64-adrp-ldr-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1125; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 71050; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 71052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 71053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 71054; }
