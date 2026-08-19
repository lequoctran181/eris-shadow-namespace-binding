/* Controlled native-loader fixture.
 * Family: SNF-130; provider: 5; profile: lld/test/ELF/mips-micro-thunks.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2085; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 131051; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 131053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 131054; }
