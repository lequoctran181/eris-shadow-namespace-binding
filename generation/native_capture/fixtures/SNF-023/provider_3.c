/* Controlled native-loader fixture.
 * Family: SNF-023; provider: 3; profile: lld/test/ELF/riscv-attributes.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 371; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 24030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 24031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 24032; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 24035; }
