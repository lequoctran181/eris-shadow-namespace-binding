/* Controlled native-loader fixture.
 * Family: SNF-144; provider: 6; profile: lld/test/ELF/lto/devirt_split_unit_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2310; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 145060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 145061; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 145064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 145065; }
