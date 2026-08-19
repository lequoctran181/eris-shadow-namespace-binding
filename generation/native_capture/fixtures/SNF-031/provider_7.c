/* Controlled native-loader fixture.
 * Family: SNF-031; provider: 7; profile: lld/test/ELF/riscv-tlsdesc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 503; }
extern int snb_anchor_3(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 32071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 32072; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 32074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 32075; }
