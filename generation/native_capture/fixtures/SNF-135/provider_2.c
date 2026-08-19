/* Controlled native-loader fixture.
 * Family: SNF-135; provider: 2; profile: lld/test/ELF/lto/undef-weak-lazy.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2162; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 136023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 136024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 136025; }
