/* Controlled native-loader fixture.
 * Family: SNF-031; provider: 3; profile: lld/test/ELF/riscv-tlsdesc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 499; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 32030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 32031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 32032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 32033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 32035; }
