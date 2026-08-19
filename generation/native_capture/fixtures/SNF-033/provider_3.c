/* Controlled native-loader fixture.
 * Family: SNF-033; provider: 3; profile: lld/test/ELF/ppc64-toc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 531; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 34030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 34031; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 34033; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 34035; }
