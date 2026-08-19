/* Controlled native-loader fixture.
 * Family: SNF-065; provider: 1; profile: lld/test/ELF/wrap-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1041; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 66010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 66011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 66012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 66013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 66014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 66015; }
