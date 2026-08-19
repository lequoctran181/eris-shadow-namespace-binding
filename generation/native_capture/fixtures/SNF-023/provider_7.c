/* Controlled native-loader fixture.
 * Family: SNF-023; provider: 7; profile: lld/test/ELF/riscv-attributes.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 375; }
extern int snb_anchor_0(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_6(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 24070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 24071; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 24073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 24074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 24075; }
