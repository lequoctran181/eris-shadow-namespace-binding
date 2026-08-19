/* Controlled native-loader fixture.
 * Family: SNF-152; provider: 2; profile: lld/test/ELF/unresolved-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2434; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 153020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 153021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 153022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 153023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 153024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 153025; }
