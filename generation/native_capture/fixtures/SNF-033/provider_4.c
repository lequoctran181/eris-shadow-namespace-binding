/* Controlled native-loader fixture.
 * Family: SNF-033; provider: 4; profile: lld/test/ELF/ppc64-toc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 532; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 34040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 34041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 34042; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 34045; }
