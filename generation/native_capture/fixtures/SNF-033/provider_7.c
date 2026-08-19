/* Controlled native-loader fixture.
 * Family: SNF-033; provider: 7; profile: lld/test/ELF/ppc64-toc-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 535; }
extern int snb_anchor_0(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 34071; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 34074; }
