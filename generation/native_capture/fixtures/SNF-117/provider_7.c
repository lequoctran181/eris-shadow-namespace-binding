/* Controlled native-loader fixture.
 * Family: SNF-117; provider: 7; profile: lld/test/ELF/lto/common2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1879; }
extern int snb_anchor_5(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 118070; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 118072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 118073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 118074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 118075; }
