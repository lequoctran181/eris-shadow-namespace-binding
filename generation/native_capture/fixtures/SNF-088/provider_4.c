/* Controlled native-loader fixture.
 * Family: SNF-088; provider: 4; profile: lld/test/ELF/comdat.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1412; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 89040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 89041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 89042; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 89044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 89045; }
