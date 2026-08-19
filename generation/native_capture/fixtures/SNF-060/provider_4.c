/* Controlled native-loader fixture.
 * Family: SNF-060; provider: 4; profile: lld/test/ELF/gc-absolute.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 964; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 61040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 61041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 61042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 61043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 61044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 61045; }
