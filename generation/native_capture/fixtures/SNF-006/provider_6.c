/* Controlled native-loader fixture.
 * Family: SNF-006; provider: 6; profile: lld/test/ELF/export-dynamic-symbol.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 102; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 7060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 7061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 7062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 7063; }
