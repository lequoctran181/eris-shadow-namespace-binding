/* Controlled native-loader fixture.
 * Family: SNF-196; provider: 1; profile: lld/test/ELF/systemz-pie.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3137; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 197010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 197011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 197012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 197013; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 197015; }
