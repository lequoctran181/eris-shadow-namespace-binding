/* Controlled native-loader fixture.
 * Family: SNF-167; provider: 5; profile: lld/test/ELF/riscv-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2677; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 168050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 168051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 168052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 168053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 168054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 168055; }
