/* Controlled native-loader fixture.
 * Family: SNF-033; provider: 6; profile: lld/test/ELF/ppc64-toc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 534; }
extern int snb_anchor_3(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 34060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 34061; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 34063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 34064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 34065; }
