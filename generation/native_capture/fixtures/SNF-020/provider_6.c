/* Controlled native-loader fixture.
 * Family: SNF-020; provider: 6; profile: lld/test/ELF/shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 326; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 21060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 21061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 21062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 21063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 21064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 21065; }
