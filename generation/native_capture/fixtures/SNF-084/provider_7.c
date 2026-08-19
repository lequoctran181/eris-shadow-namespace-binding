/* Controlled native-loader fixture.
 * Family: SNF-084; provider: 7; profile: lld/test/ELF/riscv-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1351; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 85070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 85071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 85072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 85073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 85074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 85075; }
