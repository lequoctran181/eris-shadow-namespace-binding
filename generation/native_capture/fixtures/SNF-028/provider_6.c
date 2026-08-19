/* Controlled native-loader fixture.
 * Family: SNF-028; provider: 6; profile: lld/test/ELF/verdef-defaultver.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 454; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 29060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 29061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 29062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 29063; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 29065; }
