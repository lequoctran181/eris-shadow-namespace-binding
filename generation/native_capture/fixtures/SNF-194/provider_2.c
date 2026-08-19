/* Controlled native-loader fixture.
 * Family: SNF-194; provider: 2; profile: lld/test/ELF/ppc64-bsymbolic-toc-restore.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3106; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 195021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 195022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 195023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 195024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 195025; }
