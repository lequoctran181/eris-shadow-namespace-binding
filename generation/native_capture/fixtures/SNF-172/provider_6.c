/* Controlled native-loader fixture.
 * Family: SNF-172; provider: 6; profile: lld/test/ELF/map-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2758; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 173060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 173061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 173062; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 173064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 173065; }
