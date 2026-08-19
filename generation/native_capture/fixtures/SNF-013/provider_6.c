/* Controlled native-loader fixture.
 * Family: SNF-013; provider: 6; profile: lld/test/ELF/why-live.test
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 214; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 14060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 14061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 14062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 14063; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 14065; }
