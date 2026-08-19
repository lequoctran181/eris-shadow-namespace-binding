/* Controlled native-loader fixture.
 * Family: SNF-196; provider: 3; profile: lld/test/ELF/systemz-pie.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3139; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 197030; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 197032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 197034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 197035; }
