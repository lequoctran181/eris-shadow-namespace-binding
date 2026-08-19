/* Controlled native-loader fixture.
 * Family: SNF-042; provider: 7; profile: lld/test/ELF/why-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 679; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 43071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 43073; }
