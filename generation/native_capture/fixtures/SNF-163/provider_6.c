/* Controlled native-loader fixture.
 * Family: SNF-163; provider: 6; profile: lld/test/ELF/incompatible.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2614; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 164060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 164061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 164062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 164063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 164064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 164065; }
