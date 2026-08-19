/* Controlled native-loader fixture.
 * Family: SNF-127; provider: 7; profile: lld/test/ELF/gnu-ifunc-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2039; }
extern int snb_anchor_2(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 128070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 128071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 128072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 128073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 128074; }
