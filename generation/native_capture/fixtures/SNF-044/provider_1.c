/* Controlled native-loader fixture.
 * Family: SNF-044; provider: 1; profile: lld/test/ELF/riscv-reloc-leb128.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 705; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 45010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 45011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 45012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 45014; }
