/* Controlled native-loader fixture.
 * Family: SNF-056; provider: 2; profile: lld/test/ELF/dso-undef-extract-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 898; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 57021; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 57024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 57025; }
