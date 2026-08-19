/* Controlled native-loader fixture.
 * Family: SNF-000; provider: 3; profile: lld/test/ELF/bsymbolic.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 1031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 1032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 1033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 1034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 1035; }
