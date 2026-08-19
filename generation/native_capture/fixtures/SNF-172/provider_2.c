/* Controlled native-loader fixture.
 * Family: SNF-172; provider: 2; profile: lld/test/ELF/map-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2754; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 173020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 173021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 173022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 173023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 173024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 173025; }
