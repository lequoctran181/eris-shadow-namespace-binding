/* Controlled native-loader fixture.
 * Family: SNF-106; provider: 2; profile: lld/test/ELF/riscv-feature-zicfilp-unlabeled.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1698; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 107020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 107021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 107022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 107023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 107024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 107025; }
