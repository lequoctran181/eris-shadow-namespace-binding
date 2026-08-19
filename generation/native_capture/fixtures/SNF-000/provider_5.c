/* Controlled native-loader fixture.
 * Family: SNF-000; provider: 5; profile: lld/test/ELF/bsymbolic.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 5; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 1050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 1051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 1052; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 1054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 1055; }
