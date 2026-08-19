/* Controlled native-loader fixture.
 * Family: SNF-192; provider: 7; profile: lld/test/ELF/aarch64-gnu-ifunc-nonpreemptable2.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3079; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 193070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 193071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 193073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 193074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 193075; }
