/* Controlled native-loader fixture.
 * Family: SNF-000; provider: 7; profile: lld/test/ELF/bsymbolic.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 7; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 1070; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 1072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 1073; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 1075; }
