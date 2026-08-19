/* Controlled native-loader fixture.
 * Family: SNF-185; provider: 7; profile: lld/test/ELF/version-symbol-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2967; }
extern int snb_anchor_2(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 186070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 186071; }
