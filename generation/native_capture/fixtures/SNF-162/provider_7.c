/* Controlled native-loader fixture.
 * Family: SNF-162; provider: 7; profile: lld/test/ELF/vs-diagnostics-undefined-symbol-2.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2599; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 163072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 163073; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 163075; }
