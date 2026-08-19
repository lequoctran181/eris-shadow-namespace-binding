/* Controlled native-loader fixture.
 * Family: SNF-139; provider: 7; profile: lld/test/ELF/basic-mips.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2231; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 140070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 140072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 140073; }
