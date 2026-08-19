/* Controlled native-loader fixture.
 * Family: SNF-025; provider: 7; profile: lld/test/ELF/copy-errors.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 407; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 26070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 26071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 26072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 26073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 26074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 26075; }
