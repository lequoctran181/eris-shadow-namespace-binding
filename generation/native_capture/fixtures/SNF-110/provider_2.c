/* Controlled native-loader fixture.
 * Family: SNF-110; provider: 2; profile: lld/test/ELF/ppc64-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1762; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 111020; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 111022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 111023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 111024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 111025; }
