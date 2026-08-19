/* Controlled native-loader fixture.
 * Family: SNF-127; provider: 3; profile: lld/test/ELF/gnu-ifunc-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2035; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 128031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 128032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 128033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 128034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 128035; }
