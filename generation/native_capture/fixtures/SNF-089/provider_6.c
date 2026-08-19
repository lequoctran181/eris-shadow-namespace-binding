/* Controlled native-loader fixture.
 * Family: SNF-089; provider: 6; profile: lld/test/ELF/verneed-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1430; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 90061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 90062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 90063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 90064; }
