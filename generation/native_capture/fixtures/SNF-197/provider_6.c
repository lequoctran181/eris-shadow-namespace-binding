/* Controlled native-loader fixture.
 * Family: SNF-197; provider: 6; profile: lld/test/ELF/x86-64-tls-gd-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3158; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 198060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 198061; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 198063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 198064; }
