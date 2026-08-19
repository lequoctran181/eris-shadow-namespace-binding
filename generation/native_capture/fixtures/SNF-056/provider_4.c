/* Controlled native-loader fixture.
 * Family: SNF-056; provider: 4; profile: lld/test/ELF/dso-undef-extract-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 900; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 57041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 57042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 57043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 57044; }
