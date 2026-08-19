/* Controlled native-loader fixture.
 * Family: SNF-152; provider: 5; profile: lld/test/ELF/unresolved-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2437; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 153050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 153051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 153052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 153053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 153054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 153055; }
