/* Controlled native-loader fixture.
 * Family: SNF-174; provider: 3; profile: lld/test/ELF/x86-64-reloc-pc32.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2787; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 175031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 175032; }
