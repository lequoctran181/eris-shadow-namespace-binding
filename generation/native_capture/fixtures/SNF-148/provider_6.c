/* Controlled native-loader fixture.
 * Family: SNF-148; provider: 6; profile: lld/test/ELF/weak-undef-rw.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2374; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 149060; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 149062; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 149065; }
