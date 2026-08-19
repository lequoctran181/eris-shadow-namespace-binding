/* Controlled native-loader fixture.
 * Family: SNF-140; provider: 4; profile: lld/test/ELF/lto/comdat-mixed-archive.test
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2244; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 141040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 141041; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 141043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 141044; }
