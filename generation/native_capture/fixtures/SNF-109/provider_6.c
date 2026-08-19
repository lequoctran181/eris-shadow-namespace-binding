/* Controlled native-loader fixture.
 * Family: SNF-109; provider: 6; profile: lld/test/ELF/gnu-ifunc-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1750; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 110060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 110061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 110062; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 110064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 110065; }
