/* Controlled native-loader fixture.
 * Family: SNF-131; provider: 6; profile: lld/test/ELF/wrap-extract-real.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2102; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 132060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 132062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 132063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 132064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 132065; }
