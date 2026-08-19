/* Controlled native-loader fixture.
 * Family: SNF-194; provider: 7; profile: lld/test/ELF/ppc64-bsymbolic-toc-restore.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3111; }
extern int snb_anchor_2(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_6(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 195070; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 195072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 195073; }
