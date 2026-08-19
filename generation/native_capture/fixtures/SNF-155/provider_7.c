/* Controlled native-loader fixture.
 * Family: SNF-155; provider: 7; profile: lld/test/ELF/dtlto/files.test
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2487; }
extern int snb_anchor_3(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 156070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 156071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 156072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 156073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 156074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 156075; }
