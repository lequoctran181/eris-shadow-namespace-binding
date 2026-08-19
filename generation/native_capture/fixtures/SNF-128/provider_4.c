/* Controlled native-loader fixture.
 * Family: SNF-128; provider: 4; profile: lld/test/ELF/gc-sections-metadata-startstop.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2052; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 129040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 129041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 129042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 129043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 129044; }
