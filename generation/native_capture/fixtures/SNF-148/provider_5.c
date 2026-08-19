/* Controlled native-loader fixture.
 * Family: SNF-148; provider: 5; profile: lld/test/ELF/weak-undef-rw.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2373; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 149050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 149051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 149052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 149053; }
