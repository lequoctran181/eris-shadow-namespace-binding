/* Controlled native-loader fixture.
 * Family: SNF-004; provider: 7; profile: lld/test/ELF/symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 71; }
extern int snb_anchor_0(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 5070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 5071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 5072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 5073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 5074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 5075; }
