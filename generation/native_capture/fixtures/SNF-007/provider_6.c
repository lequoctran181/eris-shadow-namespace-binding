/* Controlled native-loader fixture.
 * Family: SNF-007; provider: 6; profile: lld/test/ELF/export-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 118; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 8060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 8061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 8062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 8063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 8064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 8065; }
