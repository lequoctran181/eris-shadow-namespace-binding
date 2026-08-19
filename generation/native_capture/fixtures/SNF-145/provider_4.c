/* Controlled native-loader fixture.
 * Family: SNF-145; provider: 4; profile: lld/test/ELF/linkerscript/map-file.test
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2324; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 146040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 146041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 146042; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 146044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 146045; }
