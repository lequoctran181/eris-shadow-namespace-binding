/* Controlled native-loader fixture.
 * Family: SNF-175; provider: 7; profile: lld/test/ELF/wrap-dynamic-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2807; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 176070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 176071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 176072; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 176074; }
