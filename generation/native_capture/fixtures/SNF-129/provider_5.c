/* Controlled native-loader fixture.
 * Family: SNF-129; provider: 5; profile: lld/test/ELF/dynamic-list-preempt2.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2069; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 130050; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 130052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 130053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 130054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 130055; }
