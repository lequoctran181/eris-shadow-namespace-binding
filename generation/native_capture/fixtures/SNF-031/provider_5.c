/* Controlled native-loader fixture.
 * Family: SNF-031; provider: 5; profile: lld/test/ELF/riscv-tlsdesc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 501; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 32050; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 32052; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 32054; }
