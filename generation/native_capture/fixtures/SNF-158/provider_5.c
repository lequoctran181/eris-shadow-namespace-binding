/* Controlled native-loader fixture.
 * Family: SNF-158; provider: 5; profile: lld/test/ELF/weak-shared-gc.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2533; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 159050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 159051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 159052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 159053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 159054; }
