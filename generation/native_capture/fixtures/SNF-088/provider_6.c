/* Controlled native-loader fixture.
 * Family: SNF-088; provider: 6; profile: lld/test/ELF/comdat.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1414; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 89061; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 89064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 89065; }
