/* Controlled native-loader fixture.
 * Family: SNF-192; provider: 2; profile: lld/test/ELF/aarch64-gnu-ifunc-nonpreemptable2.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3074; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 193020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 193021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 193022; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 193024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 193025; }
