/* Controlled native-loader fixture.
 * Family: SNF-148; provider: 4; profile: lld/test/ELF/weak-undef-rw.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2372; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 149040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 149041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 149042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 149043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 149044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 149045; }
