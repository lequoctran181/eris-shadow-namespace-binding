/* Controlled native-loader fixture.
 * Family: SNF-098; provider: 1; profile: lld/test/ELF/weak-undef-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1569; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 99011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 99012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 99013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 99014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 99015; }
