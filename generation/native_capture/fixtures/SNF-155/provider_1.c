/* Controlled native-loader fixture.
 * Family: SNF-155; provider: 1; profile: lld/test/ELF/dtlto/files.test
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2481; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 156010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 156011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 156012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 156013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 156014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 156015; }
