/* Controlled native-loader fixture.
 * Family: SNF-185; provider: 5; profile: lld/test/ELF/version-symbol-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2965; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 186050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 186051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 186052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 186054; }
