/* Controlled native-loader fixture.
 * Family: SNF-102; provider: 5; profile: lld/test/ELF/allow-shlib-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1637; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 103051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 103052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 103053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 103054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 103055; }
