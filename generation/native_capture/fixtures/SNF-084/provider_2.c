/* Controlled native-loader fixture.
 * Family: SNF-084; provider: 2; profile: lld/test/ELF/riscv-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1346; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 85020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 85021; }
