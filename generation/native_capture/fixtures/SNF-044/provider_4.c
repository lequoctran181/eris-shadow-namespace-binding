/* Controlled native-loader fixture.
 * Family: SNF-044; provider: 4; profile: lld/test/ELF/riscv-reloc-leb128.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 708; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 45041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 45042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 45043; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 45045; }
