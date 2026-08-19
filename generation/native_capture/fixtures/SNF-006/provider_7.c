/* Controlled native-loader fixture.
 * Family: SNF-006; provider: 7; profile: lld/test/ELF/export-dynamic-symbol.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 103; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 7070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 7071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 7072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 7073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 7074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 7075; }
