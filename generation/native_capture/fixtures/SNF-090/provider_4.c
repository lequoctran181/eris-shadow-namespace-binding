/* Controlled native-loader fixture.
 * Family: SNF-090; provider: 4; profile: lld/test/ELF/lto/wrap-script-referenced.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1444; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 91040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 91041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 91043; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 91045; }
