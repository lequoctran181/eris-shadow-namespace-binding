/* Controlled native-loader fixture.
 * Family: SNF-106; provider: 4; profile: lld/test/ELF/riscv-feature-zicfilp-unlabeled.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1700; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 107041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 107042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 107043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 107044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 107045; }
