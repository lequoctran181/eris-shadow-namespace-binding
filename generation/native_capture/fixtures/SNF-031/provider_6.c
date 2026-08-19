/* Controlled native-loader fixture.
 * Family: SNF-031; provider: 6; profile: lld/test/ELF/riscv-tlsdesc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 502; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 32061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 32062; }
