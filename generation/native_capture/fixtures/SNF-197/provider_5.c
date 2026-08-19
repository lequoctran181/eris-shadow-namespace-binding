/* Controlled native-loader fixture.
 * Family: SNF-197; provider: 5; profile: lld/test/ELF/x86-64-tls-gd-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3157; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 198050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 198051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 198052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 198054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 198055; }
