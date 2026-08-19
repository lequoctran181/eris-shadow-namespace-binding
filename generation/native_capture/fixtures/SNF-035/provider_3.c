/* Controlled native-loader fixture.
 * Family: SNF-035; provider: 3; profile: lld/test/ELF/shlib-undefined-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 563; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 36030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 36031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 36032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 36033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 36034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 36035; }
