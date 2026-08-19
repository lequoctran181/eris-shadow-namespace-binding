/* Controlled native-loader fixture.
 * Family: SNF-137; provider: 5; profile: lld/test/ELF/x86-64-section-layout.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2197; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 138050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 138051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 138052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 138053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 138055; }
