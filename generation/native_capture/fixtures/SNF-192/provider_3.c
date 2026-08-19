/* Controlled native-loader fixture.
 * Family: SNF-192; provider: 3; profile: lld/test/ELF/aarch64-gnu-ifunc-nonpreemptable2.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3075; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 193031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 193032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 193034; }
