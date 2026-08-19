/* Controlled native-loader fixture.
 * Family: SNF-031; provider: 4; profile: lld/test/ELF/riscv-tlsdesc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 500; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 32040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 32041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 32042; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 32044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 32045; }
