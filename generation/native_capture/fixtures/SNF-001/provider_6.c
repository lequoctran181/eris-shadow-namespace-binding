/* Controlled native-loader fixture.
 * Family: SNF-001; provider: 6; profile: lld/test/ELF/wrap-lazy.test
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 22; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 2060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 2061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 2062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 2063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 2064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 2065; }
