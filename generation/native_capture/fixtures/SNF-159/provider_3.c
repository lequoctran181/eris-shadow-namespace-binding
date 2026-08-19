/* Controlled native-loader fixture.
 * Family: SNF-159; provider: 3; profile: lld/test/ELF/systemz-gotent-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2547; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 160030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 160031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 160032; }
