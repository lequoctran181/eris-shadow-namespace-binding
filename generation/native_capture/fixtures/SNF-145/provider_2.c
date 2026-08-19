/* Controlled native-loader fixture.
 * Family: SNF-145; provider: 2; profile: lld/test/ELF/linkerscript/map-file.test
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2322; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 146020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 146021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 146022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 146023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 146024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 146025; }
