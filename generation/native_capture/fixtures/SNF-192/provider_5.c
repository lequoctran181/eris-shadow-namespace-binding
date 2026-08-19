/* Controlled native-loader fixture.
 * Family: SNF-192; provider: 5; profile: lld/test/ELF/aarch64-gnu-ifunc-nonpreemptable2.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3077; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 193050; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 193052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 193053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 193055; }
