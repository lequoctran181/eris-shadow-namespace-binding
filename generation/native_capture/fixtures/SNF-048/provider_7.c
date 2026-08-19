/* Controlled native-loader fixture.
 * Family: SNF-048; provider: 7; profile: lld/test/ELF/symbol-ordering-file-warnings.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 775; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 49070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 49071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 49072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 49073; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 49075; }
