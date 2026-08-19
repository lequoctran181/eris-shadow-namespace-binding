/* Controlled native-loader fixture.
 * Family: SNF-017; provider: 5; profile: lld/test/ELF/verneed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 277; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 18050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 18052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 18053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 18054; }
