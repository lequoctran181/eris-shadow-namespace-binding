/* Controlled native-loader fixture.
 * Family: SNF-193; provider: 6; profile: lld/test/ELF/gc-sections-protected.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3094; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 194060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 194061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 194062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 194064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 194065; }
