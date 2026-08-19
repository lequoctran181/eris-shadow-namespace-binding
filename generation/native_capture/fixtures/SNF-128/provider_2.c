/* Controlled native-loader fixture.
 * Family: SNF-128; provider: 2; profile: lld/test/ELF/gc-sections-metadata-startstop.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2050; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 129020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 129021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 129022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 129023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 129024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 129025; }
