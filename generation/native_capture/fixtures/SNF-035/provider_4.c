/* Controlled native-loader fixture.
 * Family: SNF-035; provider: 4; profile: lld/test/ELF/shlib-undefined-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 564; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 36040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 36042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 36043; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 36045; }
