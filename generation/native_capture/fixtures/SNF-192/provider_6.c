/* Controlled native-loader fixture.
 * Family: SNF-192; provider: 6; profile: lld/test/ELF/aarch64-gnu-ifunc-nonpreemptable2.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3078; }
extern int snb_anchor_3(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 193061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 193062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 193063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 193064; }
