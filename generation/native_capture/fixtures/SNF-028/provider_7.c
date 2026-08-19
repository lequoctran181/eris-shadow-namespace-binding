/* Controlled native-loader fixture.
 * Family: SNF-028; provider: 7; profile: lld/test/ELF/verdef-defaultver.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 455; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 29070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 29071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 29072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 29073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 29074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 29075; }
