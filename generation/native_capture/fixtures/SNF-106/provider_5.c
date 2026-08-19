/* Controlled native-loader fixture.
 * Family: SNF-106; provider: 5; profile: lld/test/ELF/riscv-feature-zicfilp-unlabeled.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1701; }
extern int snb_anchor_1(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 107050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 107051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 107052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 107053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 107055; }
