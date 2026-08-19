/* Controlled native-loader fixture.
 * Family: SNF-128; provider: 1; profile: lld/test/ELF/gc-sections-metadata-startstop.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2049; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 129011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 129012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 129013; }
