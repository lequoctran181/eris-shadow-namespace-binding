/* Controlled native-loader fixture.
 * Family: SNF-064; provider: 2; profile: lld/test/ELF/hexagon-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1026; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 65020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 65021; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 65023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 65024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 65025; }
