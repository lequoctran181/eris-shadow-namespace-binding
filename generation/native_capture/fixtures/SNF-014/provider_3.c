/* Controlled native-loader fixture.
 * Family: SNF-014; provider: 3; profile: lld/test/ELF/lto/wrap-unreferenced-before-codegen.test
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 227; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 15030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 15031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 15033; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 15035; }
