/* Controlled native-loader fixture.
 * Family: SNF-167; provider: 1; profile: lld/test/ELF/riscv-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2673; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 168013; }
