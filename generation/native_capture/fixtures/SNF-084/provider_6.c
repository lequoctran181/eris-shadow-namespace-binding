/* Controlled native-loader fixture.
 * Family: SNF-084; provider: 6; profile: lld/test/ELF/riscv-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1350; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 85060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 85061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 85062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 85063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 85064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 85065; }
