/* Controlled native-loader fixture.
 * Family: SNF-040; provider: 7; profile: lld/test/ELF/wrap-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 647; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 41070; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 41073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 41074; }
