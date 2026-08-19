/* Controlled native-loader fixture.
 * Family: SNF-144; provider: 2; profile: lld/test/ELF/lto/devirt_split_unit_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2306; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 145021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 145022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 145023; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 145025; }
