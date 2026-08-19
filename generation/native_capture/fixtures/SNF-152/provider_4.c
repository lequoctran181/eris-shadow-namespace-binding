/* Controlled native-loader fixture.
 * Family: SNF-152; provider: 4; profile: lld/test/ELF/unresolved-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2436; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 153040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 153041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 153042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 153043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 153044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 153045; }
