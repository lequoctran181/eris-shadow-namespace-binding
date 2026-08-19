/* Controlled native-loader fixture.
 * Family: SNF-115; provider: 2; profile: lld/test/ELF/mips-tls-64-pic-local-variable.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1842; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 116020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 116021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 116022; }
