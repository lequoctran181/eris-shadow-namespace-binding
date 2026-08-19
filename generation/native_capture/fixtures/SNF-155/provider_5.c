/* Controlled native-loader fixture.
 * Family: SNF-155; provider: 5; profile: lld/test/ELF/dtlto/files.test
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2485; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 156050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 156051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 156052; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 156054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 156055; }
