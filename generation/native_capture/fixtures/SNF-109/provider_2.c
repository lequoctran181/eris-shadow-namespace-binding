/* Controlled native-loader fixture.
 * Family: SNF-109; provider: 2; profile: lld/test/ELF/gnu-ifunc-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1746; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 110020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 110021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 110022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 110023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 110024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 110025; }
