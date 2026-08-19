/* Controlled native-loader fixture.
 * Family: SNF-074; provider: 1; profile: lld/test/ELF/wrap.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1185; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 75011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 75012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 75013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 75014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 75015; }
