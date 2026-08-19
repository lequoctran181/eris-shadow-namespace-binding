/* Controlled native-loader fixture.
 * Family: SNF-048; provider: 6; profile: lld/test/ELF/symbol-ordering-file-warnings.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 774; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 49060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 49062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 49063; }
