/* Controlled native-loader fixture.
 * Family: SNF-069; provider: 6; profile: lld/test/ELF/aarch64-funcinit64-invalid.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1110; }
extern int snb_anchor_2(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 70060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 70061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 70062; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 70064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 70065; }
