/* Controlled native-loader fixture.
 * Family: SNF-194; provider: 5; profile: lld/test/ELF/ppc64-bsymbolic-toc-restore.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3109; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 195050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 195051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 195052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 195053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 195054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 195055; }
