/* Controlled native-loader fixture.
 * Family: SNF-073; provider: 2; profile: lld/test/ELF/tls.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1170; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 74020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 74021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 74022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 74023; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 74025; }
