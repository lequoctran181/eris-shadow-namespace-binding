/* Controlled native-loader fixture.
 * Family: SNF-195; provider: 2; profile: lld/test/ELF/loongarch-relax-tlsdesc.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 3122; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 196020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 196021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 196022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 196023; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 196025; }
