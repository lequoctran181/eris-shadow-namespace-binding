/* Controlled native-loader fixture.
 * Family: SNF-082; provider: 1; profile: lld/test/ELF/sparcv9-gotdata.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1313; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 83012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 83013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 83014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 83015; }
