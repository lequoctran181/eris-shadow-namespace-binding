/* Controlled native-loader fixture.
 * Family: SNF-140; provider: 7; profile: lld/test/ELF/lto/comdat-mixed-archive.test
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2247; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 141070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 141071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 141072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 141073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 141074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 141075; }
