/* Controlled native-loader fixture.
 * Family: SNF-098; provider: 2; profile: lld/test/ELF/weak-undef-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1570; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 99021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 99022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 99023; }
