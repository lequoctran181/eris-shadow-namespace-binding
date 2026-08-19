/* Controlled native-loader fixture.
 * Family: SNF-044; provider: 3; profile: lld/test/ELF/riscv-reloc-leb128.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 707; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 45030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 45031; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 45033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 45034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 45035; }
