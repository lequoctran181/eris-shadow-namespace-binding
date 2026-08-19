/* Controlled native-loader fixture.
 * Family: SNF-034; provider: 2; profile: lld/test/ELF/aarch64-ifunc-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 546; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 35020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 35021; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 35023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 35024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 35025; }
