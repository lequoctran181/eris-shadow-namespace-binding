/* Controlled native-loader fixture.
 * Family: SNF-196; provider: 5; profile: lld/test/ELF/systemz-pie.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3141; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 197050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 197051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 197052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 197053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 197054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 197055; }
