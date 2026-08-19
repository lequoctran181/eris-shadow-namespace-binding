/* Controlled native-loader fixture.
 * Family: SNF-193; provider: 2; profile: lld/test/ELF/gc-sections-protected.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3090; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 194020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 194021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 194022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 194023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 194024; }
