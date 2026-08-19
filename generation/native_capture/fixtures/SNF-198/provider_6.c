/* Controlled native-loader fixture.
 * Family: SNF-198; provider: 6; profile: lld/test/ELF/lto/thinlto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3174; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 199060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 199062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 199063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 199064; }
