/* Controlled native-loader fixture.
 * Family: SNF-024; provider: 6; profile: lld/test/ELF/resolution.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 390; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 25060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 25061; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 25063; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 25065; }
