/* Controlled native-loader fixture.
 * Family: SNF-084; provider: 5; profile: lld/test/ELF/riscv-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1349; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 85053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 85054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 85055; }
