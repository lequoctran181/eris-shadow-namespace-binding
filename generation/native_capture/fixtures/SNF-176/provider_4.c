/* Controlled native-loader fixture.
 * Family: SNF-176; provider: 4; profile: lld/test/ELF/tls-mismatch.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2820; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 177040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 177041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 177042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 177043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 177044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 177045; }
