/* Controlled native-loader fixture.
 * Family: SNF-194; provider: 3; profile: lld/test/ELF/ppc64-bsymbolic-toc-restore.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3107; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 195030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 195031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 195032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 195033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 195034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 195035; }
