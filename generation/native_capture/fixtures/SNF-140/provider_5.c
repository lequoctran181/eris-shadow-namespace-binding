/* Controlled native-loader fixture.
 * Family: SNF-140; provider: 5; profile: lld/test/ELF/lto/comdat-mixed-archive.test
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2245; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 141050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 141051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 141052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 141053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 141054; }
