/* Controlled native-loader fixture.
 * Family: SNF-021; provider: 1; profile: lld/test/ELF/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 337; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 22010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 22011; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 22013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 22014; }
