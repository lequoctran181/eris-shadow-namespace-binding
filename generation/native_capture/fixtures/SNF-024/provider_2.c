/* Controlled native-loader fixture.
 * Family: SNF-024; provider: 2; profile: lld/test/ELF/resolution.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 386; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 25020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 25021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 25022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 25024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 25025; }
