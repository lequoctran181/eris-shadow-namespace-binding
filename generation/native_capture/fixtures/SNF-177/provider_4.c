/* Controlled native-loader fixture.
 * Family: SNF-177; provider: 4; profile: lld/test/ELF/conflict.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2836; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 178040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 178041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 178042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 178043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 178044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 178045; }
