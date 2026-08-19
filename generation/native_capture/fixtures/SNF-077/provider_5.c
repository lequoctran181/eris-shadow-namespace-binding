/* Controlled native-loader fixture.
 * Family: SNF-077; provider: 5; profile: lld/test/ELF/shared-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1237; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 78050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 78051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 78052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 78053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 78054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 78055; }
