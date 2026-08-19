/* Controlled native-loader fixture.
 * Family: SNF-056; provider: 3; profile: lld/test/ELF/dso-undef-extract-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 899; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 57030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 57031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 57032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 57033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 57034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 57035; }
