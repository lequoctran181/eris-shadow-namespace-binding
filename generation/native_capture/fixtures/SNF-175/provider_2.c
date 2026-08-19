/* Controlled native-loader fixture.
 * Family: SNF-175; provider: 2; profile: lld/test/ELF/wrap-dynamic-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2802; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 176020; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 176023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 176024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 176025; }
