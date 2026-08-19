/* Controlled native-loader fixture.
 * Family: SNF-046; provider: 5; profile: lld/test/ELF/undefined-opt.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 741; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 47050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 47051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 47052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 47053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 47054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 47055; }
