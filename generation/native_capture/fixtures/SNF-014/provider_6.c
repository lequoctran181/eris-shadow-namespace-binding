/* Controlled native-loader fixture.
 * Family: SNF-014; provider: 6; profile: lld/test/ELF/lto/wrap-unreferenced-before-codegen.test
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 230; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 15060; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 15063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 15064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 15065; }
