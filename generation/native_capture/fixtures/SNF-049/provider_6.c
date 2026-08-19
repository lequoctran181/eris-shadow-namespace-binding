/* Controlled native-loader fixture.
 * Family: SNF-049; provider: 6; profile: lld/test/ELF/lto/lazy-debug.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 790; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 50060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 50061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 50062; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 50064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 50065; }
