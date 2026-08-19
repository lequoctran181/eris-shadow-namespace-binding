/* Controlled native-loader fixture.
 * Family: SNF-043; provider: 7; profile: lld/test/ELF/bsymbolic-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 695; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 44071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 44072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 44073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 44074; }
