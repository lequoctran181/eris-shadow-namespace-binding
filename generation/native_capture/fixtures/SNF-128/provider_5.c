/* Controlled native-loader fixture.
 * Family: SNF-128; provider: 5; profile: lld/test/ELF/gc-sections-metadata-startstop.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2053; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 129050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 129051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 129052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 129054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 129055; }
