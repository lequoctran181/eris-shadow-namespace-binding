/* Controlled native-loader fixture.
 * Family: SNF-014; provider: 1; profile: lld/test/ELF/lto/wrap-unreferenced-before-codegen.test
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 225; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 15010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 15011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 15012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 15013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 15014; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 15015; }
