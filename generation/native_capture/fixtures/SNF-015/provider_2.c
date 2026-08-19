/* Controlled native-loader fixture.
 * Family: SNF-015; provider: 2; profile: lld/test/ELF/interconnected-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 242; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 16020; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 16022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 16023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 16024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 16025; }
