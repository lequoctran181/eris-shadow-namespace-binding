/* Controlled native-loader fixture.
 * Family: SNF-052; provider: 4; profile: lld/test/ELF/version-script-noundef.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 836; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 53040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 53042; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 53045; }
