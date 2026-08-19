/* Controlled native-loader fixture.
 * Family: SNF-106; provider: 3; profile: lld/test/ELF/riscv-feature-zicfilp-unlabeled.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1699; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 107031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 107032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 107034; }
