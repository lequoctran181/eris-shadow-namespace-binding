/* Controlled native-loader fixture.
 * Family: SNF-128; provider: 7; profile: lld/test/ELF/gc-sections-metadata-startstop.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2055; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 129071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 129072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 129073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 129074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 129075; }
