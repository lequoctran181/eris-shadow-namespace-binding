/* Controlled native-loader fixture.
 * Family: SNF-031; provider: 1; profile: lld/test/ELF/riscv-tlsdesc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 497; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 32010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 32011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 32012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 32013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 32015; }
