/* Controlled native-loader fixture.
 * Family: SNF-089; provider: 1; profile: lld/test/ELF/verneed-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1425; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 90010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 90011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 90012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 90013; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 90015; }
