/* Controlled native-loader fixture.
 * Family: SNF-127; provider: 1; profile: lld/test/ELF/gnu-ifunc-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2033; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 128010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 128011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 128012; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 128015; }
