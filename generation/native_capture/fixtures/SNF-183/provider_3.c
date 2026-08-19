/* Controlled native-loader fixture.
 * Family: SNF-183; provider: 3; profile: lld/test/ELF/riscv-relax-align.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2931; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 184030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 184032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 184033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 184034; }
