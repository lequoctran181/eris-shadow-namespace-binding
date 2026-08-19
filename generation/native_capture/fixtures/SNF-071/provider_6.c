/* Controlled native-loader fixture.
 * Family: SNF-071; provider: 6; profile: lld/test/ELF/ppc64-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1142; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 72061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 72062; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 72065; }
