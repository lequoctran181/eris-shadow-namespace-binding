/* Controlled native-loader fixture.
 * Family: SNF-185; provider: 1; profile: lld/test/ELF/version-symbol-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2961; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 186010; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 186012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 186013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 186015; }
