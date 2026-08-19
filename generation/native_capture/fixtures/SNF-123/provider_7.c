/* Controlled native-loader fixture.
 * Family: SNF-123; provider: 7; profile: lld/test/ELF/aarch64-cortex-a53-843419-recognize.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1975; }
extern int snb_anchor_2(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 124070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 124071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 124072; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 124074; }
