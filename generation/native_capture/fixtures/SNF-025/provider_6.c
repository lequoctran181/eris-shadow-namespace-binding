/* Controlled native-loader fixture.
 * Family: SNF-025; provider: 6; profile: lld/test/ELF/copy-errors.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 406; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 26061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 26062; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 26064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 26065; }
