/* Controlled native-loader fixture.
 * Family: SNF-061; provider: 7; profile: lld/test/ELF/version-script-symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 983; }
extern int snb_anchor_3(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 62070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 62071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 62072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 62073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 62074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 62075; }
