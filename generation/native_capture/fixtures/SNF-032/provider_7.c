/* Controlled native-loader fixture.
 * Family: SNF-032; provider: 7; profile: lld/test/ELF/local-symbols-order.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 519; }
extern int snb_anchor_2(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 33070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 33071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 33072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 33073; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 33075; }
