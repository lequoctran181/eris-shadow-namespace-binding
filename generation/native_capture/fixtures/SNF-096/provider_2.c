/* Controlled native-loader fixture.
 * Family: SNF-096; provider: 2; profile: lld/test/ELF/undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1538; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 97020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 97021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 97022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 97023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 97024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 97025; }
