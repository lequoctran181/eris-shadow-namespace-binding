/* Controlled native-loader fixture.
 * Family: SNF-079; provider: 6; profile: lld/test/ELF/lto/archive.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1270; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 80060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 80061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 80062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 80063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 80064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 80065; }
