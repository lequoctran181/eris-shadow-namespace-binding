/* Controlled native-loader fixture.
 * Family: SNF-098; provider: 7; profile: lld/test/ELF/weak-undef-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1575; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 99070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 99071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 99072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 99073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 99074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 99075; }
