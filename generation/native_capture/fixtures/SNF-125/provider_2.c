/* Controlled native-loader fixture.
 * Family: SNF-125; provider: 2; profile: lld/test/ELF/hexagon-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2002; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 126021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 126022; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 126024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 126025; }
