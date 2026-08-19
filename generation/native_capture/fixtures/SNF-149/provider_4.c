/* Controlled native-loader fixture.
 * Family: SNF-149; provider: 4; profile: lld/test/ELF/linkerscript/memory-err.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2388; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 150041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 150042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 150043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 150044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 150045; }
