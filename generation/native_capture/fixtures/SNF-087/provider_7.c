/* Controlled native-loader fixture.
 * Family: SNF-087; provider: 7; profile: lld/test/ELF/arm-cmse-diagnostics.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1399; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 88070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 88071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 88072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 88073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 88074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 88075; }
