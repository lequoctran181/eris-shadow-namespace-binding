/* Controlled native-loader fixture.
 * Family: SNF-106; provider: 6; profile: lld/test/ELF/riscv-feature-zicfilp-unlabeled.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1702; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 107060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 107061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 107062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 107063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 107064; }
