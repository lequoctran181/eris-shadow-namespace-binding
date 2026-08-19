/* Controlled native-loader fixture.
 * Family: SNF-162; provider: 3; profile: lld/test/ELF/vs-diagnostics-undefined-symbol-2.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2595; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 163030; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 163033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 163034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 163035; }
