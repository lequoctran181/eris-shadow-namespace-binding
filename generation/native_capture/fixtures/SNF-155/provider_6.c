/* Controlled native-loader fixture.
 * Family: SNF-155; provider: 6; profile: lld/test/ELF/dtlto/files.test
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2486; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 156060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 156061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 156062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 156063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 156064; }
