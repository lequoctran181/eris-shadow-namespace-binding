/* Controlled native-loader fixture.
 * Family: SNF-044; provider: 7; profile: lld/test/ELF/riscv-reloc-leb128.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 711; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 45071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 45072; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 45074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 45075; }
