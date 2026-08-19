/* Controlled native-loader fixture.
 * Family: SNF-119; provider: 4; profile: lld/test/ELF/arm-wraparound-veneer.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1908; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 120040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 120041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 120042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 120043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 120044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 120045; }
