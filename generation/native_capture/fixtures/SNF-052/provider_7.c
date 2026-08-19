/* Controlled native-loader fixture.
 * Family: SNF-052; provider: 7; profile: lld/test/ELF/version-script-noundef.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 839; }
extern int snb_anchor_3(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 53070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 53071; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 53074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 53075; }
