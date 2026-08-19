/* Controlled native-loader fixture.
 * Family: SNF-082; provider: 7; profile: lld/test/ELF/sparcv9-gotdata.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1319; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 83071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 83072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 83073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 83074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 83075; }
