/* Controlled native-loader fixture.
 * Family: SNF-120; provider: 6; profile: lld/test/ELF/verneed.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1926; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 121061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 121062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 121063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 121064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 121065; }
