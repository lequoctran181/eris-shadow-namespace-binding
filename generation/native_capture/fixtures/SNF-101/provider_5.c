/* Controlled native-loader fixture.
 * Family: SNF-101; provider: 5; profile: lld/test/ELF/aarch64-gnu-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1621; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 102050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 102052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 102053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 102054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 102055; }
