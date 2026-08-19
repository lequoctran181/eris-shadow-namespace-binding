/* Controlled native-loader fixture.
 * Family: SNF-047; provider: 6; profile: lld/test/ELF/common-archive-lookup.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 758; }
extern int snb_anchor_2(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 48061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 48062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 48063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 48064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 48065; }
