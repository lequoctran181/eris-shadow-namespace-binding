/* Controlled native-loader fixture.
 * Family: SNF-044; provider: 5; profile: lld/test/ELF/riscv-reloc-leb128.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 709; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 45051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 45052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 45053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 45054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 45055; }
