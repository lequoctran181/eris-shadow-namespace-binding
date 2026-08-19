/* Controlled native-loader fixture.
 * Family: SNF-141; provider: 3; profile: lld/test/ELF/gnu-ifunc-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2259; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 142030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 142031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 142032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 142033; }
