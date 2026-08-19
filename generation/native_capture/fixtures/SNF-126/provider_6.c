/* Controlled native-loader fixture.
 * Family: SNF-126; provider: 6; profile: lld/test/ELF/gdb-index-gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2022; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 127060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 127061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 127062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 127063; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 127065; }
