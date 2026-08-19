/* Controlled native-loader fixture.
 * Family: SNF-185; provider: 2; profile: lld/test/ELF/version-symbol-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2962; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 186020; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 186022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 186023; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 186025; }
