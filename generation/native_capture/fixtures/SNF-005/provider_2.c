/* Controlled native-loader fixture.
 * Family: SNF-005; provider: 2; profile: lld/test/ELF/relro-non-contiguous.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 82; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 6020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 6021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 6022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 6024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 6025; }
