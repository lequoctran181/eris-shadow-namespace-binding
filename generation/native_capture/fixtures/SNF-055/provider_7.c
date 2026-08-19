/* Controlled native-loader fixture.
 * Family: SNF-055; provider: 7; profile: lld/test/ELF/lto/thinlto-index-only.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 887; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 56072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 56073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 56074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 56075; }
