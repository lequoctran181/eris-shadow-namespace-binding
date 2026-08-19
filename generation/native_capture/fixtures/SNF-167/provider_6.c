/* Controlled native-loader fixture.
 * Family: SNF-167; provider: 6; profile: lld/test/ELF/riscv-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2678; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 168061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 168062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 168063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 168064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 168065; }
