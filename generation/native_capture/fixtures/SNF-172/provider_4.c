/* Controlled native-loader fixture.
 * Family: SNF-172; provider: 4; profile: lld/test/ELF/map-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2756; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 173040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 173042; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 173044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 173045; }
