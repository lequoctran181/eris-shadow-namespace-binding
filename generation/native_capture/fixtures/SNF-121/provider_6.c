/* Controlled native-loader fixture.
 * Family: SNF-121; provider: 6; profile: lld/test/ELF/icf-safe.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1942; }
extern int snb_anchor_3(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 122060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 122061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 122062; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 122065; }
