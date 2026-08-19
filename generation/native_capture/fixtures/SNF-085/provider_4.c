/* Controlled native-loader fixture.
 * Family: SNF-085; provider: 4; profile: lld/test/ELF/pack-dyn-relocs.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1364; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 86040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 86042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 86043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 86044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 86045; }
