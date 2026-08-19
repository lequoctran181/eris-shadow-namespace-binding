/* Controlled native-loader fixture.
 * Family: SNF-085; provider: 7; profile: lld/test/ELF/pack-dyn-relocs.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1367; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 86070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 86071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 86072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 86073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 86074; }
