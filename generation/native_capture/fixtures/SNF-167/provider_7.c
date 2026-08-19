/* Controlled native-loader fixture.
 * Family: SNF-167; provider: 7; profile: lld/test/ELF/riscv-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2679; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 168070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 168071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 168072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 168073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 168074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 168075; }
