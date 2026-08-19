/* Controlled native-loader fixture.
 * Family: SNF-194; provider: 6; profile: lld/test/ELF/ppc64-bsymbolic-toc-restore.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3110; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 195060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 195061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 195062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 195063; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 195065; }
