/* Controlled native-loader fixture.
 * Family: SNF-127; provider: 6; profile: lld/test/ELF/gnu-ifunc-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2038; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 128060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 128061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 128062; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 128065; }
