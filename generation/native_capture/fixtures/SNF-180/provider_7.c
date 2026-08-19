/* Controlled native-loader fixture.
 * Family: SNF-180; provider: 7; profile: lld/test/ELF/lto/libcall-archive-bitcode.test
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2887; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 181071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 181072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 181073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 181074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 181075; }
