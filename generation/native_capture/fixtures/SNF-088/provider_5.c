/* Controlled native-loader fixture.
 * Family: SNF-088; provider: 5; profile: lld/test/ELF/comdat.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1413; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 89052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 89053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 89054; }
