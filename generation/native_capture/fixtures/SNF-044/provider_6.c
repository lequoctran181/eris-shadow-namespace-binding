/* Controlled native-loader fixture.
 * Family: SNF-044; provider: 6; profile: lld/test/ELF/riscv-reloc-leb128.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 710; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 45060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 45061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 45062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 45063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 45064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 45065; }
