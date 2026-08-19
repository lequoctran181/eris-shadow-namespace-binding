/* Controlled native-loader fixture.
 * Family: SNF-079; provider: 2; profile: lld/test/ELF/lto/archive.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1266; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 80020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 80021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 80022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 80023; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 80025; }
