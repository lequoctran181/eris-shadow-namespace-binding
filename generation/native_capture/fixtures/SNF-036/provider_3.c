/* Controlled native-loader fixture.
 * Family: SNF-036; provider: 3; profile: lld/test/ELF/as-needed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 579; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 37030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 37031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 37032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 37033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 37034; }
