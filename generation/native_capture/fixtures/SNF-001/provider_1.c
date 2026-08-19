/* Controlled native-loader fixture.
 * Family: SNF-001; provider: 1; profile: lld/test/ELF/wrap-lazy.test
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 17; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 2011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 2012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 2013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 2014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 2015; }
