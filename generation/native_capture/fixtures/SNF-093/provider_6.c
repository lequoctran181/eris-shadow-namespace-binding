/* Controlled native-loader fixture.
 * Family: SNF-093; provider: 6; profile: lld/test/ELF/lto/comdat-nodeduplicate.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1494; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 94061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 94062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 94063; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 94065; }
