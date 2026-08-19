/* Controlled native-loader fixture.
 * Family: SNF-187; provider: 7; profile: lld/test/ELF/ppc32-local-branch.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2999; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 188070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 188071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 188072; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 188074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 188075; }
