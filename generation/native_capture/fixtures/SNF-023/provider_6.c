/* Controlled native-loader fixture.
 * Family: SNF-023; provider: 6; profile: lld/test/ELF/riscv-attributes.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 374; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 24060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 24061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 24062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 24063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 24064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 24065; }
