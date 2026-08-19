/* Controlled native-loader fixture.
 * Family: SNF-171; provider: 5; profile: lld/test/ELF/mips-got-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2741; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 172050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 172051; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 172053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 172054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 172055; }
