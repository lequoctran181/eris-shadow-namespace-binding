/* Controlled native-loader fixture.
 * Family: SNF-033; provider: 2; profile: lld/test/ELF/ppc64-toc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 530; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 34020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 34021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 34022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 34023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 34024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 34025; }
