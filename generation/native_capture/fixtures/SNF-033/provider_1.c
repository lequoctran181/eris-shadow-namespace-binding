/* Controlled native-loader fixture.
 * Family: SNF-033; provider: 1; profile: lld/test/ELF/ppc64-toc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 529; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 34010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 34011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 34013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 34014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 34015; }
