/* Controlled native-loader fixture.
 * Family: SNF-049; provider: 5; profile: lld/test/ELF/lto/lazy-debug.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 789; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 50051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 50052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 50053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 50054; }
