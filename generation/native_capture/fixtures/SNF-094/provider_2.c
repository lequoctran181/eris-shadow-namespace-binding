/* Controlled native-loader fixture.
 * Family: SNF-094; provider: 2; profile: lld/test/ELF/executable-undefined-protected-ignoreall.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1506; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 95020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 95021; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 95023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 95024; }
