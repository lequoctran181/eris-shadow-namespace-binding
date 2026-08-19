/* Controlled native-loader fixture.
 * Family: SNF-157; provider: 6; profile: lld/test/ELF/exclude-libs-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2518; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 158060; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 158062; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 158064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 158065; }
