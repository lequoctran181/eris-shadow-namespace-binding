/* Controlled native-loader fixture.
 * Family: SNF-023; provider: 4; profile: lld/test/ELF/riscv-attributes.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 372; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 24040; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 24043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 24044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 24045; }
