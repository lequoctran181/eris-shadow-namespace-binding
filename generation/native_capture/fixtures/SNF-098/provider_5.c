/* Controlled native-loader fixture.
 * Family: SNF-098; provider: 5; profile: lld/test/ELF/weak-undef-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1573; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 99052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 99053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 99054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 99055; }
