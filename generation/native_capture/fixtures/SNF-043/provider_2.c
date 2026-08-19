/* Controlled native-loader fixture.
 * Family: SNF-043; provider: 2; profile: lld/test/ELF/bsymbolic-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 690; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 44021; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 44023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 44024; }
