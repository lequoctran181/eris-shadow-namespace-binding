/* Controlled native-loader fixture.
 * Family: SNF-004; provider: 4; profile: lld/test/ELF/symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 68; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 5040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 5041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 5042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 5043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 5044; }
