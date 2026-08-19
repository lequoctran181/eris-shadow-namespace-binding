/* Controlled native-loader fixture.
 * Family: SNF-137; provider: 3; profile: lld/test/ELF/x86-64-section-layout.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2195; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 138030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 138032; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 138034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 138035; }
