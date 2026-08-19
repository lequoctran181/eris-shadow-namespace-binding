/* Controlled native-loader fixture.
 * Family: SNF-085; provider: 6; profile: lld/test/ELF/pack-dyn-relocs.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1366; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 86063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 86064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 86065; }
