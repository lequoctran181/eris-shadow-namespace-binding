/* Controlled native-loader fixture.
 * Family: SNF-194; provider: 4; profile: lld/test/ELF/ppc64-bsymbolic-toc-restore.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3108; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 195040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 195041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 195042; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 195044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 195045; }
