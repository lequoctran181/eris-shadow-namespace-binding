/* Controlled native-loader fixture.
 * Family: SNF-016; provider: 5; profile: lld/test/ELF/undef-suggest-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 261; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 17051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 17052; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 17054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 17055; }
