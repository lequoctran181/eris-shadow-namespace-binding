/* Controlled native-loader fixture.
 * Family: SNF-176; provider: 6; profile: lld/test/ELF/tls-mismatch.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2822; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 177060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 177061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 177062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 177064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 177065; }
